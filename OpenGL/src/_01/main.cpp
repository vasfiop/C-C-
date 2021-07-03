#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

void fragmebuffer_size_callback(GLFWwindow *window, int width, int height); // 监听函数
void processInput(GLFWwindow *window);                                      // 键盘按下函数
GLuint vertexShaderInit();                                                  // 顶点着色器初始化
GLuint fragmentShaderInit();                                                //片段着色器初始化

const char *vshaderSource =
    "#version 430 core \n"
    "layout (location = 0) in vec3 aPos; \n"
    "void main() \n"
    "{ \n"
    "    gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0); \n"
    "}";
const char *fshaderSource =
    "#version 430 core \n"
    "out vec4 FragColor; \n"
    "void main() \n"
    "{ \n"
    "FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f); \n"
    "} \n";
float vertices[] = {
    0.5f, 0.5f, 0.0f,   // 右上角
    0.5f, -0.5f, 0.0f,  // 右下角
    -0.5f, -0.5f, 0.0f, // 左下角
    -0.5f, 0.5f, 0.0f   // 左上角
};

GLuint indices[] = {
    0, 1, 3, // 第一个三角形
    1, 2, 3  // 第二个三角形
};

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
    GLFWwindow *window = glfwCreateWindow(800, 600, "first_test", NULL, NULL);
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
    glViewport(0, 0, 800, 600);
    // 窗口变化监听
    glfwSetFramebufferSizeCallback(window, fragmebuffer_size_callback);
    // 创建VBO
    GLuint VBO;
    glGenBuffers(1, &VBO);
    // 创建VAO
    GLuint VAO;
    glGenVertexArrays(1, &VAO);
    // 创建EBO
    GLuint EBO;
    glGenBuffers(1, &EBO);
    // 绑定VBO
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    // 绑定VAO
    glBindVertexArray(VAO);
    // 绑定EBO
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);
    // 填充数据
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    // 设置顶点属性指针
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void *)0);
    glEnableVertexAttribArray(0);

    // 顶点着色器初始化
    GLuint vertexShader;
    vertexShader = vertexShaderInit();
    // 片段着色器初始化
    GLuint fragmentShader;
    fragmentShader = fragmentShaderInit();

    // 将着色器连接起来
    GLuint shaderProgram;
    shaderProgram = glCreateProgram();
    glAttachShader(shaderProgram, vertexShader);
    glAttachShader(shaderProgram, fragmentShader);
    glLinkProgram(shaderProgram);
    // 检测是否成功
    int success;
    char infoLog[512];
    glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
    if (!success)
    {
        glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::" << infoLog << std::endl;
    }
    else
        std::cout << "SUCCESS::SHADER::link program" << std::endl;
    // 激活着色器
    glUseProgram(shaderProgram);
    // 删除着色器
    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);

    // 线框绘制模式
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

    // 渲染循环
    while (!glfwWindowShouldClose(window))
    {
        // 按下esc退出
        processInput(window);

        // 渲染指令
        glClearColor(0.2, 0.3, 0.3, 1.0);
        glClear(GL_COLOR_BUFFER_BIT);

        glUseProgram(shaderProgram);
        glBindVertexArray(VAO);
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
GLuint fragmentShaderInit()
{
    unsigned int fragmentShader;
    fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1, &fshaderSource, NULL);
    glCompileShader(fragmentShader);

    // 检测是否成功
    int success;
    char infoLog[512];
    glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
    if (!success)
    {
        glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::" << infoLog << std::endl;
    }
    else
        std::cout << "SUCCESS::SHADER::compile shader" << std::endl;

    return fragmentShader;
}
GLuint vertexShaderInit()
{
    GLuint vertexShader;
    vertexShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShader, 1, &vshaderSource, NULL);
    glCompileShader(vertexShader);

    // 检测是否成功
    int success;
    char infoLog[512];
    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
    if (!success)
    {
        glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::" << infoLog << std::endl;
    }
    else
        std::cout << "SUCCESS::SHADER::compile shader" << std::endl;

    return vertexShader;
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
