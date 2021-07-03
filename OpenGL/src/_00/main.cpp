#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

void fragmebuffer_size_callback(GLFWwindow *window, int width, int height);
void processInput(GLFWwindow *window);

int main()
{
    // 初始化GLFW
    if (!glfwInit())
    {
        std::cout << "ERROR::INIT::glfw init" << std::endl;
        return -1;
    }
    else
        std::cout << "SUCCESS::INIT::glfw init" << std::endl;
    // 设置OpenGL坂本号
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    // 设置窗口基本信息
    GLFWwindow *window = glfwCreateWindow(600, 600, "first_test", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "ERROR::CREATE::create window" << std::endl;
        glfwTerminate();
        return -1;
    }
    else
        std::cout << "SUCCESS::CREATE::create window" << std::endl;
    glfwMakeContextCurrent(window);
    // 初始化glew
    if (glewInit() != GLEW_OK)
    {
        std::cout << "ERROR::INIT::glew init" << std::endl;
        return -1;
    }
    else
        std::cout << "SUCCESS::INIT::glfw init" << std::endl;
    glfwSwapInterval(1);
    // 设置视口
    glViewport(0, 0, 100, 100);
    // 窗口变化监听
    glfwSetFramebufferSizeCallback(window, fragmebuffer_size_callback);
    // 渲染循环
    while (!glfwWindowShouldClose(window))
    {
        processInput(window);

        // 渲染指令
        glClearColor(0.2, 0.3, 0.3, 1.0);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}

void fragmebuffer_size_callback(GLFWwindow *window, int width, int height)
{
    glViewport(0, 0, width, height);
}

void processInput(GLFWwindow *window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    {
        std::cout << "OPERATION::KEYBOARD::you put esc" << std::endl;
        glfwSetWindowShouldClose(window, true);
    }
}