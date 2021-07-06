#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <string>
#include <iostream>
#include <fstream>
#include <cmath>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/matrix_transform.hpp>

#define _FILE_NAME_ "41"

namespace Utils
{
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
            std::cout << "ERROR::FILE::�ļ���ʧ��::" << filepath << std::endl;
            exit(EXIT_FAILURE);
        }
        else
            std::cout << "SUCCESS::FILE::�ļ��򿪳ɹ�!" << std::endl;
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
            std::cout << "SUCCESS::SHADER::������ɫ������ɹ�" << std::endl;

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
            std::cout << "SUCCESS::SHADER::Ƭ����ɫ������ɹ�" << std::endl;

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
            std::cout << "SUCCESS::SHADER::��ɫ�����ӳ���ɹ�" << std::endl;

        return vfProgram;
    }
}
