// 片段着色器和顶点着色器
#include <GL\glew.h>
#include <GLFW\glfw3.h>

#include <iostream>
#include <string>
#include <fstream>

#define numVAOs 1

GLuint renderingProgram;
GLuint vao[numVAOs];

void printShaderLog(GLuint shader)
{
    int len = 0;
    int chWrittn = 0;
    char *log;
    glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &len);
    if (len > 0)
    {
        log = (char *)malloc(len);
        glGetShaderInfoLog(shader, len, &chWrittn, log);
        std::cout << "Shader Info Log: " << log << std::endl;
        free(log);
    }
}
void printfProgramLog(int prog)
{
    int len = 0;
    int chWrittn = 0;
    char *log;
    glGetProgramiv(prog, GL_INFO_LOG_LENGTH, &len);
    if (len > 0)
    {
        log = (char *)malloc(len);
        glGetProgramInfoLog(prog, len, &chWrittn, log);
        std::cout << "Program Info Log: " << log << std::endl;
        free(log);
    }
}
bool checkOpenGLError()
{
    bool foundError = false;
    GLint glErr = glGetError();
    while (glErr != GL_NO_ERROR)
    {
        std::cout << "glError: " << glErr << std::endl;
        foundError = true;
        glErr = glGetError();
    }

    return foundError;
}

GLuint createShaderProgram()
{
    GLint vertCompiled;
    GLint fragcompiled;
    GLint linked;

    std::string vertShaderStr = readShaderSource("./src/04/GLSL/vertShader.glsl");
    std::string fragShaderStr = readShaderSource("./src/04/GLSL/fragShader.glsl");

    const char *vshaderSource = vertShaderStr.c_str();
    const char *fshaderSource = fragShaderStr.c_str();

    GLuint vShader = glCreateShader(GL_VERTEX_SHADER);
    GLuint fShader = glCreateShader(GL_FRAGMENT_SHADER);
    // 创建了2个名为GL_VERTEX_SHADER和GL_FRAGMENT_SHADER的着色器

    glShaderSource(vShader, 1, &vshaderSource, NULL);
    glShaderSource(fShader, 1, &fshaderSource, NULL);
    glCompileShader(vShader);
    checkOpenGLError();
    glGetShaderiv(vShader, GL_COMPILE_STATUS, &vertCompiled);
    if (vertCompiled != 1)
    {
        std::cout << "vertext compilation failed" << std::endl;
        printShaderLog(vShader);
    }
    glCompileShader(fShader);
    checkOpenGLError();
    glGetShaderiv(fShader, GL_COMPILE_STATUS, &fragcompiled);
    if (fragcompiled != 1)
    {
        std::cout << "fragment compilation failed" << std::endl;
        printShaderLog(fShader);
    }

    GLuint vfProgram = glCreateProgram();
    glAttachShader(vfProgram, vShader);
    glAttachShader(vfProgram, fShader);
    glLinkProgram(vfProgram);
    checkOpenGLError();
    if (linked != 1)
    {
        std::cout << "linking failed" << std::endl;
        printfProgramLog(vfProgram);
    }

    return vfProgram;
}

std::string readShaderSource(const char *filepath)
{
    using namespace std;
    string content;
    ifstream filestream(filepath, ios::in);
    string line = "";
    while (!filestream.eof())
    {
        getline(filestream, line);
        content.append(line + "\n");
    }
    filestream.close();
    return content;
}

void init(GLFWwindow *window)
{
    renderingProgram = createShaderProgram();
    glGenVertexArrays(numVAOs, vao);
    glBindVertexArray(vao[0]);
}

void display(GLFWwindow *window, double currentTime)
{
    glUseProgram(renderingProgram);
    glPointSize(30);
    glDrawArrays(GL_POINTS, 0, 1);
}

int main(int argc, char const *argv[])
{
    if (!glfwInit())
        exit(EXIT_FAILURE);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    GLFWwindow *window = glfwCreateWindow(600, 600, "Chapter2 - programl", NULL, NULL);
    glfwMakeContextCurrent(window);
    if (glewInit() != GLEW_OK)
        exit(EXIT_FAILURE);
    glfwSwapInterval(1);

    init(window);

    while (!glfwWindowShouldClose(window))
    {
        display(window, glfwGetTime());
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    exit(EXIT_SUCCESS);
}
