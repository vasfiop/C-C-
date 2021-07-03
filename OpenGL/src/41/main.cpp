#include "Utils.h"

#define numVAOs 1
#define numVBOs 2

float cameraX, cameraY, cameraZ;
float cubLocX, cubLocY, cubLocZ;
GLuint renderingProgram;
GLuint vao[numVAOs];
GLuint vbo[numVBOs];

GLuint mvLoc, projLoc;
int width, height;
float aspect;

glm::mat4 pMat, vMat, mMat, mvMat;

void setupVertice();
void init(GLFWwindow *window);
void display(GLFWwindow *window, double currentTime);

int main()
{
    // 初始化GLFW
    if (!glfwInit())
    {
        std::cout << "ERROR::INIT::GLFW初始化" << std::endl;
        return -1;
    }
    else
        std::cout << "SUCCESS::INIT::GLFW初始化" << std::endl;
    // 设置OpenGL坂本号
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    // 设置窗口基本信息
    GLFWwindow *window = glfwCreateWindow(800, 600, _FILE_NAME_, NULL, NULL);
    if (window == NULL)
    {
        std::cout << "ERROR::CREATE::创建窗口" << std::endl;
        glfwTerminate();
        return -1;
    }
    else
        std::cout << "SUCCESS::CREATE::创建窗口" << std::endl;
    glfwMakeContextCurrent(window);
    // 初始化glew
    if (glewInit() != GLEW_OK)
    {
        std::cout << "ERROR::INIT::GLEW初始化" << std::endl;
        return -1;
    }
    else
        std::cout << "SUCCESS::INIT::GLEW初始化" << std::endl;
    // 初始化函数
    init(window);
    // 渲染循环
    while (!glfwWindowShouldClose(window))
    {
        // 渲染函数
        display(window, glfwGetTime());
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
}

void display(GLFWwindow *window, double currentTime)
{
    glClear(GL_DEPTH_BUFFER_BIT);
    glUseProgram(renderingProgram);
    // 获取MV矩阵和投影矩阵的同一变量(获取顶点着色器的变量)
    mvLoc = glGetUniformLocation(renderingProgram, "mv_matrix");
    projLoc = glGetUniformLocation(renderingProgram, "proj_matrix");
    // 构建透视矩阵
    glfwGetFramebufferSize(window, &width, &height);
    aspect = (float)width / (float)height;
    pMat = glm::perspective(1.0472f, aspect, 0.1f, 1000.0f);
    // 构建视图矩阵、模型矩阵和视图-模型矩阵
    vMat = glm::translate(glm::mat4(1.0), glm::vec3(-cameraX, -cameraY, -cameraZ));
    mMat = glm::translate(glm::mat4(1.0), glm::vec3(cubLocX, cubLocY, cubLocZ));
    mvMat = vMat * mMat;
    // 将透视矩阵和MV矩阵复制给响应的同一变量(将变量传回顶点着色器)
    glUniformMatrix4fv(mvLoc, 1, GL_FALSE, glm::value_ptr(mvMat));
    glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(pMat));
    // 将相关VBO关联给顶点着色器响应的顶点属性
    glBindBuffer(GL_ARRAY_BUFFER, vbo[0]);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
    glEnableVertexAttribArray(0);
    // 调整OpenGL设置，绘制模型
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glDrawArrays(GL_TRIANGLES, 0, 36);
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
    setupVertice();
}
void setupVertice()
{
    float vertexPositions[108] = {
        -1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, -1.0, -1.0,
        1.0, -1.0, -1.0, 1.0, 1.0, -1.0, -1.0, 1.0, -1.0,
        1.0, -1.0, -1.0, 1.0, -1.0, 1.0, 1.0, 1.0, -1.0,
        1.0, -1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -1.0,
        1.0, -1.0, 1.0, -1.0, -1.0, 1.0, 1.0, 1.0, 1.0,
        -1.0, -1.0, 1.0, -1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
        -1.0, -1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0,
        -1.0, -1.0, -1.0, -1.0, 1.0, -1.0, -1.0, 1.0, 1.0,
        1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, 1.0 - 1.0, 1.0, -1.0, 1.0, 1.0, -1.0, 1.0, 1.0, 1.0,
        1.0, 1.0, 1.0, -1.0, 1.0, 1.0, -1.0, 1.0, -1.0};
    glGenVertexArrays(1, vao);
    glBindVertexArray(vao[0]);
    glGenBuffers(numVBOs, vbo);

    glBindBuffer(GL_ARRAY_BUFFER, vbo[0]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertexPositions), vertexPositions, GL_STATIC_DRAW);
}