#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#define numVAOs 1

GLuint renderingProgram;
GLuint vao[numVAOs];

void init(GLFWwindow *window);
void display(GLFWwindow *window, double currentTime);
GLuint createShaderProgram();
bool checkOpenGLError();

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

    const char *vshaderSource =
        "#version 430 \n"
        "void main(void) \n"
        "{ gl_Position = vec4(0.0, 0.0, 0.0, 1.0); }";
    const char *fshaderSource =
        "#version 430\n"
        "out vec4 color; \n"
        "void main(void) \n"
        "{ color = vec4 (0.0,0.0,1.0,1.0); }";

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
    glUseProgram(renderingProgram);
    glPointSize(30.0f);
    glDrawArrays(GL_TRIANGLES, 0, 4);
}
void init(GLFWwindow *window)
{
    renderingProgram = createShaderProgram();
    glGenVertexArrays(numVAOs, vao);
    glBindVertexArray(vao[0]);
}