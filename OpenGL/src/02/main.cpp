// 片段着色器和顶点着色器
#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <iostream>

#define numVAOs 1

GLuint renderingProgram;
GLuint vao[numVAOs];

GLuint createShaderProgram()
{
    const char *vshaderSource = "#version 430 \n void main(void) \n {gl_Position = vec4(0.0,0.0,0.0,1.0); }";
    const char *fshaderSource = "#version 430 \n out vec4 color;\n void main(void) \n {color = vec4(0.0,0.0,1.0,1.0); }";

    GLuint vShader = glCreateShader(GL_VERTEX_SHADER);
    GLuint fShader = glCreateShader(GL_FRAGMENT_SHADER);
    // 创建了2个名为GL_VERTEX_SHADER和GL_FRAGMENT_SHADER的着色器

    glShaderSource(vShader, 1, &vshaderSource, NULL);
    glShaderSource(fShader, 1, &fshaderSource, NULL);
    glCompileShader(vShader);
    glCompileShader(fShader);

    GLuint vfProgram = glCreateProgram();
    glAttachShader(vfProgram, vShader);
    glAttachShader(vfProgram, fShader);
    glLinkProgram(vfProgram);

    return vfProgram;
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
