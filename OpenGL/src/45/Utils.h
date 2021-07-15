// 下面是OpenGL专属头文件
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <SOIL2/SOIL2.h>
// 下面是c/c++头文件
#include <string>
#include <iostream>
#include <fstream>
#include <cmath>
#include <windows.h>
#include <cstdlib>
#include <stack>
#include <ctime>

#define _FILE_NAME_ "45"     // 文件包名
#define _VERSION_NUMBER_ 1.3 // 工具包的版本号

namespace Utils
{
    // 键盘监听函数
    void processInput(GLFWwindow *window)
    {
        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        {
            std::cout << "OPERATION::KEYBOARD::你按下了ESC" << std::endl;
            glfwSetWindowShouldClose(window, true);
        }
        if (glfwGetKey(window, GLFW_KEY_BACKSPACE) == GLFW_PRESS)
        {
            std::cout << "OPERATION::KEYBOARD::你按下了空格" << std::endl;
            std::cout << "STOP::程序已暂停" << std::endl;
            system("pause");
            std::cout << "START::程序正在渲染..." << std::endl;
        }
    }
    // 读取GLSL文件函数
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
    // 检查OpenGL错误
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
    // 着色器初始化
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
            std::cout << "SUCCESS::SHADER::链接着色器程序" << std::endl;

        return vfProgram;
    }
    GLuint loadTexture(const char *texImagePath)
    {
        GLuint textureID;
        textureID = SOIL_load_OGL_texture(texImagePath, SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_INVERT_Y);
        if (textureID == 0)
            std::cout << "could not find texture file" << texImagePath << std::endl;
        return textureID;
    }
}
