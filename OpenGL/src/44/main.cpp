#include "Utils.h"

#define numVAOs 1
#define numVBOs 2

float cameraX, cameraY, cameraZ; // 试图矩阵
GLuint renderingProgram;
GLuint vao[numVAOs];
GLuint vbo[numVBOs];

std::stack<glm::mat4> mvStack;

GLuint projLoc, mvLoc;
int width, height;
float aspect;

glm::mat4 pMat, vMat, mMat, mvMat;

void setupVertice();
void init(GLFWwindow *window);
void display(GLFWwindow *window, double currentTime);
void window_reshape_callback(GLFWwindow *window, int newWidth, int newHeight);

int main()
{
    if (!glfwInit())
    {
        std::cout << "ERROR::INIT::GLFW 初始化" << std::endl;
        return -1;
    }
    else
        std::cout << "SUCCESS::INIT::GLFW 初始化" << std::endl;
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    GLFWwindow *window = glfwCreateWindow(1200, 900, _FILE_NAME_, NULL, NULL);
    if (window == NULL)
    {
        std::cout << "ERROR::CREATE::window 初始化" << std::endl;
        glfwTerminate();
        return -1;
    }
    else
        std::cout << "SUCCESS::CREATE::window 初始化" << std::endl;
    glfwMakeContextCurrent(window);
    if (glewInit() != GLEW_OK)
    {
        std::cout << "ERROR::INIT::GLEW 初始化" << std::endl;
        return -1;
    }
    else
        std::cout << "SUCCESS::INIT::GLEW 初始化" << std::endl;
    init(window);

    glfwSetWindowSizeCallback(window, window_reshape_callback);

    int count_out = 1;  // 信号量占位
    int count = 0;      // 记录渲染次数
    clock_t start_time; // 渲染开始时间
    clock_t end_time;   // 选软结束时间

    start_time = clock();
    while (!glfwWindowShouldClose(window))
    {
        if (count_out == 1)
            std::cout << "START::程序正在渲染..." << std::endl;
        Utils::processInput(window);

        display(window, glfwGetTime());
        if (Utils::checkOpenGLError())
        {
            std::cout << "ERROR::STOP::已暂停渲染" << std::endl;
            system("pause");
        }

        glfwSwapBuffers(window);
        glfwPollEvents();

        count_out = 2;
        count++;
    }
    end_time = clock();

    glfwDestroyWindow(window);
    glfwTerminate();

    std::cout << "进行了" << (double)(end_time - start_time) / CLOCKS_PER_SEC << "秒" << std::endl;
    std::cout << "渲染了" << count << "次" << std::endl;
    std::cout << "每秒钟渲染了:" << count / ((double)(end_time - start_time) / CLOCKS_PER_SEC) << "次" << std::endl;
    system("pause");
    exit(EXIT_SUCCESS);
}

void display(GLFWwindow *window, double currentTime)
{
    glClear(GL_DEPTH_BUFFER_BIT);
    glClear(GL_COLOR_BUFFER_BIT);
    glUseProgram(renderingProgram);

    glEnable(GL_CULL_FACE);

    mvLoc = glGetUniformLocation(renderingProgram, "mv_matrix");
    projLoc = glGetUniformLocation(renderingProgram, "proj_matrix");

    // 透视矩阵
    glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(pMat));
    // 将视图矩阵推入堆栈
    vMat = glm::translate(glm::mat4(1), glm::vec3(-cameraX, -cameraY, -cameraZ));
    mvStack.push(vMat);

    // 金字塔 == 太阳
    mvStack.push(mvStack.top());
    mvStack.top() *= glm::translate(glm::mat4(1), glm::vec3(0, 0, 0)); // 太阳位置
    mvStack.push(mvStack.top());
    mvStack.top() *= glm::rotate(glm::mat4(1), (float)currentTime, glm::vec3(1, 0, 0)); // 太阳旋转

    glUniformMatrix4fv(mvLoc, 1, GL_FALSE, glm::value_ptr(mvStack.top()));
    glBindBuffer(GL_ARRAY_BUFFER, vbo[1]);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
    glEnableVertexAttribArray(0);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glFrontFace(GL_CCW); // 金字塔顶点缠绕顺序为逆时针方向
    glDrawArrays(GL_TRIANGLES, 0, 18);
    mvStack.pop();

    // 立方体 == 行星
    mvStack.push(mvStack.top());
    mvStack.top() *= glm::translate(glm::mat4(1), glm::vec3(sin((float)currentTime) * 4, 0, cos((float)currentTime) * 4));
    mvStack.push(mvStack.top());
    mvStack.top() *= glm::rotate(glm::mat4(1), (float)currentTime, glm::vec3(0, 1, 0));

    glUniformMatrix4fv(mvLoc, 1, GL_FALSE, glm::value_ptr(mvStack.top()));
    glBindBuffer(GL_ARRAY_BUFFER, vbo[0]);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
    glEnableVertexAttribArray(0);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glFrontFace(GL_CW); //立方体顶点的缠绕顺序为顺时针方向
    glDrawArrays(GL_TRIANGLES, 0, 36);
    mvStack.pop();

    // 小立方体 == 月球
    mvStack.push(mvStack.top());
    mvStack.top() *= glm::translate(glm::mat4(1), glm::vec3(0, sin((float)currentTime) * 2, cos((float)currentTime) * 2));
    mvStack.top() *= glm::rotate(glm::mat4(1), (float)currentTime, glm::vec3(0.25, 0.25, 0.25));
    mvStack.top() *= glm::scale(glm::mat4(1), glm::vec3(0.25, 0.25, 0.25)); // 缩放

    glUniformMatrix4fv(mvLoc, 1, GL_FALSE, glm::value_ptr(mvStack.top()));
    glBindBuffer(GL_ARRAY_BUFFER, vbo[0]);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
    glEnableVertexAttribArray(0);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glFrontFace(GL_CW);
    glDrawArrays(GL_TRIANGLES, 0, 36);

    mvStack.pop();
    mvStack.pop();
    mvStack.pop();
    mvStack.pop();
}
void init(GLFWwindow *window)
{
    renderingProgram = Utils::createShaderProgram();
    cameraX = 0;
    cameraY = 0;
    cameraZ = 12;

    setupVertice();

    glfwGetFramebufferSize(window, &width, &height);
    aspect = (float)width / (float)height;
    pMat = glm::perspective(1.0472f, aspect, 0.1f, 1000.0f);
}
void setupVertice()
{
    float cubePositions[108] = {
        -1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, -1.0, -1.0,
        1.0, -1.0, -1.0, 1.0, 1.0, -1.0, -1.0, 1.0, -1.0,
        1.0, -1.0, -1.0, 1.0, -1.0, 1.0, 1.0, 1.0, -1.0,
        1.0, -1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -1.0,
        1.0, -1.0, 1.0, -1.0, -1.0, 1.0, 1.0, 1.0, 1.0,
        -1.0, -1.0, 1.0, -1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
        -1.0, -1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0,
        -1.0, -1.0, -1.0, -1.0, 1.0, -1.0, -1.0, 1.0, 1.0,
        -1.0, -1.0, 1.0, 1.0, -1.0, 1.0, 1.0, -1.0, -1.0,
        1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, 1.0,
        -1.0, 1.0, -1.0, 1.0, 1.0, -1.0, 1.0, 1.0, 1.0,
        1.0, 1.0, 1.0, -1.0, 1.0, 1.0, -1.0, 1.0, -1.0};

    float pyramidPositions[54] = {
        -1.0, -1.0, 1.0, 1.0, -1.0, 1.0, 0.0, 1.0, 0.0,
        1.0, -1.0, 1.0, 1.0, -1.0, -1.0, 0.0, 1.0, 0.0,
        1.0, -1.0, -1.0, -1.0, -1.0, -1.0, 0.0, 1.0, 0.0,
        -1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 0.0, 1.0, 0.0,
        -1.0, -1.0, -1.0, 1.0, -1.0, 1.0, -1.0, -1.0, 1.0,
        1.0, -1.0, 1.0, -1.0, -1.0, -1.0, 1.0, -1.0, -1.0};

    glGenVertexArrays(numVAOs, vao);
    glBindVertexArray(vao[0]);
    glGenBuffers(numVBOs, vbo);

    glBindBuffer(GL_ARRAY_BUFFER, vbo[0]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(cubePositions), cubePositions, GL_STATIC_DRAW);

    glBindBuffer(GL_ARRAY_BUFFER, vbo[1]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(pyramidPositions), pyramidPositions, GL_STATIC_DRAW);
}
void window_reshape_callback(GLFWwindow *window, int newWidth, int newHeight)
{
    aspect = (float)newWidth / (float)newHeight;
    glViewport(0, 0, newWidth, newHeight);
    pMat = glm::perspective(1.0472f, aspect, 0.1f, 1000.0f);
}