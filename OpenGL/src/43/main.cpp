#include "Utils.h"

#define numVAOs 1
#define numVBOs 2

float cameraX, cameraY, cameraZ;
float cubLocX, cubLocY, cubLocZ;
float pyrLocX, pyrLocY, pyrLocZ;
GLuint renderingProgram;
GLuint vao[numVAOs];
GLuint vbo[numVBOs];

GLuint projLoc, mvLoc;
int width, height;
float aspect;

glm::mat4 pMat, vMat, mMat, mvMat;

void setupVertice();
void init(GLFWwindow *window);
void display(GLFWwindow *window, double currentTime);

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

    GLFWwindow *window = glfwCreateWindow(800, 600, _FILE_NAME_, NULL, NULL);
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

    int count_out = 1;

    while (!glfwWindowShouldClose(window))
    {
        if (count_out == 1)
            std::cout << "程序正在渲染..." << std::endl;
        Utils::processInput(window);

        display(window, glfwGetTime());
        if (Utils::checkOpenGLError())
            system("pasue");

        glfwSwapBuffers(window);
        glfwPollEvents();
        count_out = 2;
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
}

void display(GLFWwindow *window, double currentTime)
{
    glClear(GL_DEPTH_BUFFER_BIT);
    glClear(GL_COLOR_BUFFER_BIT);
    glUseProgram(renderingProgram);

    mvLoc = glGetUniformLocation(renderingProgram, "mv_matrix");
    projLoc = glGetUniformLocation(renderingProgram, "proj_matrix");

    glfwGetFramebufferSize(window, &width, &height);
    aspect = (float)width / (float)height;
    pMat = glm::perspective(1.0472f, aspect, 0.1f, 1000.0f);
    // 绘制立方体使用0号缓冲区
    mMat = glm::translate(glm::mat4(1.0), glm::vec3(cubLocX, cubLocY, cubLocZ));
    vMat = glm::translate(glm::mat4(1.0), glm::vec3(-cameraX, -cameraY, -cameraZ));
    mvMat = vMat * mMat;

    glUniformMatrix4fv(mvLoc, 1, GL_FALSE, glm::value_ptr(mvMat));
    glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(pMat));

    glBindBuffer(GL_ARRAY_BUFFER, vbo[0]);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
    glEnableVertexAttribArray(0);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glDrawArrays(GL_TRIANGLES, 0, 36);

    // 绘制金字塔使用1号缓冲区
    mMat = glm::translate(glm::mat4(1), glm::vec3(pyrLocX, pyrLocY, pyrLocZ));
    mvMat = vMat * mMat;

    glUniformMatrix4fv(mvLoc, 1, GL_FALSE, glm::value_ptr(mvMat));

    glBindBuffer(GL_ARRAY_BUFFER, vbo[1]);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
    glEnableVertexAttribArray(0);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glDrawArrays(GL_TRIANGLES, 0, 18);
}
void init(GLFWwindow *window)
{
    renderingProgram = Utils::createShaderProgram();
    cameraX = 0;
    cameraY = 0;
    cameraZ = 8;

    cubLocX = 0;
    cubLocY = -2;
    cubLocZ = 0;

    pyrLocX = 2;
    pyrLocY = 0;
    pyrLocZ = 2;

    setupVertice();
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