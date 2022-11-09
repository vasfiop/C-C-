// 第一个OpenGL程序
#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <iostream>

using namespace std;

void init(GLFWwindow *window)
{
}

void display(GLFWwindow *window, double currentTime)
{
    glClearColor(1, 0, 0, 1);
    // 填充颜色,参数采用RGBA
    glClear(GL_COLOR_BUFFER_BIT);
    // 清除缓冲区填充的颜色
    // printf("%lf\n", currentTime);
}
int main(int argc, char const *argv[])
{
    if (!glfwInit()) // glfw组件初始化
        exit(EXIT_FAILURE);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4); // 注册版本号，版本为4.3
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    GLFWwindow *window = glfwCreateWindow(600, 600, "Chapter2 - programl", NULL, NULL); // 创建一个窗口，并且返回一个窗口指针
    // 参数指定了 宽、高、顶部标题、允许全屏显示、资源共享
    glfwMakeContextCurrent(window);
    // 创建的窗口与OpenGL上下文关联起来
    if (glewInit() != GLEW_OK)
        exit(EXIT_FAILURE);
    glfwSwapInterval(1);
    // 开启垂直同步

    init(window);

    while (!glfwWindowShouldClose(window))
    {
        display(window, glfwGetTime());
        // GetTime()是返回GLFW初始化之后经过的时间
        glfwSwapBuffers(window);
        // 开启垂直同步的缓冲区=绘制屏幕
        glfwPollEvents();
        // 处理窗口相关事件
    }

    glfwDestroyWindow(window);
    // 销毁窗口
    glfwTerminate();
    // 停止运行

    exit(EXIT_SUCCESS);
}
