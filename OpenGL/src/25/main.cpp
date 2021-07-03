#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <fstream>

#define numVAOs 1
#define _FILE_NAME_ "25"

GLuint renderingProgram;
GLuint vao[numVAOs];

float x = 0.0f;    //三角形在x轴的位置
float inc = 0.01f; //移动三角形的偏移量

void init(GLFWwindow *window);
void display(GLFWwindow *window, double currentTime);
GLuint createShaderProgram();
bool checkOpenGLError();
std::string readShaderSource(const char *filepath);
void processInput(GLFWwindow *window);

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
    GLFWwindow *window = glfwCreateWindow(800, 600, "first_test", NULL, NULL);
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

void processInput(GLFWwindow *window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    {
        std::cout << "OPERATION::KEYBOARD::you put esc" << std::endl;
        glfwSetWindowShouldClose(window, true);
    }
}
std::string readShaderSource(const char *filepath)
{
    std::string content;
    std::ifstream fileStream(filepath, std::ios::in);
    if (fileStream.fail())
    {
        std::cout << "ERROR::FILE::不能打开文件！::" << filepath << std::endl;
        exit(EXIT_FAILURE);
    }
    else
        std::cout << "SUCCESS::FILE::文件打开操作成功!" << std::endl;
    std::string line = "";
    while (!fileStream.eof())
    {
        getline(fileStream, line);
        content.append(line + "\n");
    }
    fileStream.close();
    return content;
}
bool checkOpenGLError()
{
    bool foundError = false;
    int glErr = glGetError();
    while (glErr != GL_NO_ERROR)
    {
        std::cout << "ERROR::OPENGL::" << glErr << std::endl;
        foundError = true;
        glErr = glGetError();
    }

    return foundError;
}
GLuint createShaderProgram()
{
    GLint success;
    char infoLog[521];

    std::string vertShaderStr = readShaderSource("../src/" _FILE_NAME_ "/GLSL/vertShader.glsl");
    std::string fragmentShaderStr = readShaderSource("../src/" _FILE_NAME_ "/GLSL/fragmentShader.glsl");
    const char *vshaderSource = vertShaderStr.c_str();
    const char *fshaderSource = fragmentShaderStr.c_str();

    GLuint vShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vShader, 1, &vshaderSource, NULL);
    glCompileShader(vShader);
    checkOpenGLError();
    glGetShaderiv(vShader, GL_COMPILE_STATUS, &success);
    if (!success)
    {
        glGetShaderInfoLog(vShader, 521, NULL, infoLog);
        std::cout << "ERROR::SHADER::" << infoLog << std::endl;
    }
    else
        std::cout << "SUCCESS::SHADER::顶点着色器初始化" << std::endl;

    GLuint fShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fShader, 1, &fshaderSource, NULL);
    glCompileShader(fShader);
    checkOpenGLError();
    glGetShaderiv(fShader, GL_COMPILE_STATUS, &success);
    if (!success)
    {
        glGetShaderInfoLog(vShader, 521, NULL, infoLog);
        std::cout << "ERROR::SHADER::" << infoLog << std::endl;
    }
    else
        std::cout << "SUCCESS::SHADER::片段着色器初始化" << std::endl;

    GLuint vfProgram = glCreateProgram();
    glAttachShader(vfProgram, vShader);
    glAttachShader(vfProgram, fShader);
    glLinkProgram(vfProgram);
    glGetProgramiv(vfProgram, GL_LINK_STATUS, &success);
    if (!success)
    {
        glGetProgramInfoLog(vfProgram, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::" << infoLog << std::endl;
    }
    else
        std::cout << "SUCCESS::SHADER::链接着色器程序成功" << std::endl;

    return vfProgram;
}
void display(GLFWwindow *window, double currentTime)
{
    processInput(window);

    glClear(GL_DEPTH_BUFFER_BIT);
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT); //每次将背景清除为黑色

    glUseProgram(renderingProgram);

    x += inc;
    if (x > 1.0)
        inc = -0.01;
    if (x < -1.0)
        inc = 0.01;
    GLuint offsetLoc = glGetUniformLocation(renderingProgram, "offset"); //获取offset指针
    glProgramUniform1f(renderingProgram, offsetLoc, x);
    glDrawArrays(GL_TRIANGLES, 0, 3);
}
void init(GLFWwindow *window)
{
    renderingProgram = createShaderProgram();
    glGenVertexArrays(numVAOs, vao);
    glBindVertexArray(vao[0]);
}