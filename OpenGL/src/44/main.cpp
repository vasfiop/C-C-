#include "Utils.h"

#define numVAOs 1
#define numVBOs 2

float cameraX, cameraY, cameraZ; // ��ͼ����
GLuint renderingProgram;
GLuint vao[numVAOs];
GLuint vbo[numVBOs];

std::stack<glm::mat4> mvStack;

GLuint projLoc, mvLoc;
int width, height;
float aspect;

glm::mat4 pMat, vMat, mMat, mvMat;

void setupVertice();
void init(GLFWwindow *window);
void display(GLFWwindow *window, double currentTime);
void window_reshape_callback(GLFWwindow *window, int newWidth, int newHeight);

int main()
{
    if (!glfwInit())
    {
        std::cout << "ERROR::INIT::GLFW ��ʼ��" << std::endl;
        return -1;
    }
    else
        std::cout << "SUCCESS::INIT::GLFW ��ʼ��" << std::endl;
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    GLFWwindow *window = glfwCreateWindow(1200, 900, _FILE_NAME_, NULL, NULL);
    if (window == NULL)
    {
        std::cout << "ERROR::CREATE::window ��ʼ��" << std::endl;
        glfwTerminate();
        return -1;
    }
    else
        std::cout << "SUCCESS::CREATE::window ��ʼ��" << std::endl;
    glfwMakeContextCurrent(window);
    if (glewInit() != GLEW_OK)
    {
        std::cout << "ERROR::INIT::GLEW ��ʼ��" << std::endl;
        return -1;
    }
    else
        std::cout << "SUCCESS::INIT::GLEW ��ʼ��" << std::endl;
    init(window);

    glfwSetWindowSizeCallback(window, window_reshape_callback);

    int count_out = 1;  // �ź���ռλ
    int count = 0;      // ��¼��Ⱦ����
    clock_t start_time; // ��Ⱦ��ʼʱ��
    clock_t end_time;   // ѡ�����ʱ��

    start_time = clock();
    while (!glfwWindowShouldClose(window))
    {
        if (count_out == 1)
            std::cout << "START::����������Ⱦ..." << std::endl;
        Utils::processInput(window);

        display(window, glfwGetTime());
        if (Utils::checkOpenGLError())
        {
            std::cout << "ERROR::STOP::����ͣ��Ⱦ" << std::endl;
            system("pause");
        }

        glfwSwapBuffers(window);
        glfwPollEvents();

        count_out = 2;
        count++;
    }
    end_time = clock();

    glfwDestroyWindow(window);
    glfwTerminate();

    std::cout << "������" << (double)(end_time - start_time) / CLOCKS_PER_SEC << "��" << std::endl;
    std::cout << "��Ⱦ��" << count << "��" << std::endl;
    std::cout << "ÿ������Ⱦ��:" << count / ((double)(end_time - start_time) / CLOCKS_PER_SEC) << "��" << std::endl;
    system("pause");
    exit(EXIT_SUCCESS);
}

void display(GLFWwindow *window, double currentTime)
{
    glClear(GL_DEPTH_BUFFER_BIT);
    glClear(GL_COLOR_BUFFER_BIT);
    glUseProgram(renderingProgram);

    glEnable(GL_CULL_FACE);

    mvLoc = glGetUniformLocation(renderingProgram, "mv_matrix");
    projLoc = glGetUniformLocation(renderingProgram, "proj_matrix");

    // ͸�Ӿ���
    glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(pMat));
    // ����ͼ���������ջ
    vMat = glm::translate(glm::mat4(1), glm::vec3(-cameraX, -cameraY, -cameraZ));
    mvStack.push(vMat);

    // ������ == ̫��
    mvStack.push(mvStack.top());
    mvStack.top() *= glm::translate(glm::mat4(1), glm::vec3(0, 0, 0)); // ̫��λ��
    mvStack.push(mvStack.top());
    mvStack.top() *= glm::rotate(glm::mat4(1), (float)currentTime, glm::vec3(1, 0, 0)); // ̫����ת

    glUniformMatrix4fv(mvLoc, 1, GL_FALSE, glm::value_ptr(mvStack.top()));
    glBindBuffer(GL_ARRAY_BUFFER, vbo[1]);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
    glEnableVertexAttribArray(0);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glFrontFace(GL_CCW); // �������������˳��Ϊ��ʱ�뷽��
    glDrawArrays(GL_TRIANGLES, 0, 18);
    mvStack.pop();

    // ������ == ����
    mvStack.push(mvStack.top());
    mvStack.top() *= glm::translate(glm::mat4(1), glm::vec3(sin((float)currentTime) * 4, 0, cos((float)currentTime) * 4));
    mvStack.push(mvStack.top());
    mvStack.top() *= glm::rotate(glm::mat4(1), (float)currentTime, glm::vec3(0, 1, 0));

    glUniformMatrix4fv(mvLoc, 1, GL_FALSE, glm::value_ptr(mvStack.top()));
    glBindBuffer(GL_ARRAY_BUFFER, vbo[0]);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
    glEnableVertexAttribArray(0);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glFrontFace(GL_CW); //�����嶥��Ĳ���˳��Ϊ˳ʱ�뷽��
    glDrawArrays(GL_TRIANGLES, 0, 36);
    mvStack.pop();

    // С������ == ����
    mvStack.push(mvStack.top());
    mvStack.top() *= glm::translate(glm::mat4(1), glm::vec3(0, sin((float)currentTime) * 2, cos((float)currentTime) * 2));
    mvStack.top() *= glm::rotate(glm::mat4(1), (float)currentTime, glm::vec3(0.25, 0.25, 0.25));
    mvStack.top() *= glm::scale(glm::mat4(1), glm::vec3(0.25, 0.25, 0.25)); // ����

    glUniformMatrix4fv(mvLoc, 1, GL_FALSE, glm::value_ptr(mvStack.top()));
    glBindBuffer(GL_ARRAY_BUFFER, vbo[0]);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
    glEnableVertexAttribArray(0);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glFrontFace(GL_CW);
    glDrawArrays(GL_TRIANGLES, 0, 36);

    mvStack.pop();
    mvStack.pop();
    mvStack.pop();
    mvStack.pop();
}
void init(GLFWwindow *window)
{
    renderingProgram = Utils::createShaderProgram();
    cameraX = 0;
    cameraY = 0;
    cameraZ = 12;

    setupVertice();

    glfwGetFramebufferSize(window, &width, &height);
    aspect = (float)width / (float)height;
    pMat = glm::perspective(1.0472f, aspect, 0.1f, 1000.0f);
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
void window_reshape_callback(GLFWwindow *window, int newWidth, int newHeight)
{
    aspect = (float)newWidth / (float)newHeight;
    glViewport(0, 0, newWidth, newHeight);
    pMat = glm::perspective(1.0472f, aspect, 0.1f, 1000.0f);
}