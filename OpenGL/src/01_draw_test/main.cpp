#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <fstream>

#define numVAOs 1
#define _FILE_NAME_ "Chapter2 - program1"

GLuint renderingProgram;
GLuint vao[numVAOs];

std::string readShaderSource(const char *filePath)
{
    std::string content;
    std::ifstream fileStream(filePath, std::ios::in);
    if (fileStream.fail())
    {
        std::cout << "ERROR::FILE::can not open!" << std::endl;
        exit(EXIT_FAILURE);
    }
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
        std::cout << "glError::" << glErr << std::endl;
        foundError = true;
        glErr = glGetError();
    }

    return foundError;
}
GLuint createShaderProgram()
{
    std::string vshaderstr = readShaderSource("C:\\Users\\DELL\\Desktop\\C_C++\\OpenGL\\src\\01_draw_test\\GLSL\\vsShader.glsl");
    std::string fshaderstr = readShaderSource("C:\\Users\\DELL\\Desktop\\C_C++\\OpenGL\\src\\01_draw_test\\GLSL\\fsShader.glsl");
    const char *vshaderSource = vshaderstr.c_str();
    const char *fshaderSource = fshaderstr.c_str();

    GLuint vShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vShader, 1, &vshaderSource, NULL);
    glCompileShader(vShader);

    int success;
    char infoLog[521];

    checkOpenGLError();
    glGetShaderiv(vShader, GL_COMPILE_STATUS, &success);
    if (!success)
    {
        glGetShaderInfoLog(vShader, 521, NULL, infoLog);
        std::cout << "ERROR::" << infoLog << std::endl;
    }

    GLuint fShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fShader, 1, &fshaderSource, NULL);
    glCompileShader(fShader);

    checkOpenGLError();
    glGetShaderiv(fShader, GL_COMPILE_STATUS, &success);
    if (!success)
    {
        glGetShaderInfoLog(vShader, 521, NULL, infoLog);
        std::cout << "ERROR::" << infoLog << std::endl;
    }

    GLuint vfProgram = glCreateProgram();
    glAttachShader(vfProgram, vShader);
    glAttachShader(vfProgram, fShader);
    glLinkProgram(vfProgram);

    checkOpenGLError();
    glGetProgramiv(vfProgram, GL_LINK_STATUS, &success);
    if (!success)
    {
        glGetProgramInfoLog(vfProgram, 512, NULL, infoLog);
        std::cout << "ERROR::LINK::" << infoLog << std::endl;
    }

    return vfProgram;
}

void init(GLFWwindow *window)
{
    renderingProgram = createShaderProgram();
    glGenVertexArrays(numVAOs, vao);
    glBindVertexArray(vao[0]);
    glUseProgram(renderingProgram);
}
void display(GLFWwindow *window, double currentTime)
{
    
    glDrawArrays(GL_POINT, 0, 3);
}
int main(void)
{
    if (!glfwInit())
    {
        exit(EXIT_FAILURE);
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    GLFWwindow *window = glfwCreateWindow(600, 600, _FILE_NAME_, NULL, NULL);
    glfwMakeContextCurrent(window);
    if (glewInit() != GLEW_OK)
    {
        exit(EXIT_FAILURE);
    }
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
