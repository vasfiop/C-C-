#include <iostream>
#include <fstream>
#include <string>
#include <cString>
#include <cstdlib>
#include <ctime>

#define FILE_NAME "C:\\Users\\DELL\\Desktop\\C_C++\\C++\\test.txt"       // 未加密的文件地址
#define OUT_FILE_NAME "C:\\Users\\DELL\\Desktop\\C_C++\\C++\\answer.txt" // 加密的文件地址

std::string readShaderSource(const char *filepath); // 读取文件函数(这个函数其实是读取OpenGL glsl文件的函数，由于通用所以我直接复制粘贴过来了)
char *getRandStr(int n);                            // 获得随机字符串
char *strins(char *dest, const char *src, int pos); // 插入函数

using namespace std;

int main()
{
    int n, m;
    string filestr; // 文件字符串

    (cin >> m >> n).get();

    filestr = readShaderSource(FILE_NAME);
    for (int i = 0; i < filestr.length() - 1; i++)
    {
        filestr[i] = filestr[i] + 3;
    }

    if (filestr.length() < n)
    {
        cout << "文件长度小于" << n << endl;
    }
    else
    {
        for (int i = 0; i < filestr.length() - 1 - n; i++)
        {
            char moddle;
            moddle = filestr[i];
            filestr[i] = filestr[i + n];
            filestr[i + n] = moddle;
        }
    }
    cout << filestr << endl;
    char *randStr = getRandStr(n);

    for (int p = m - 1; p < filestr.length() - 1; p += m)
    {
        filestr = strins((char *)filestr.data(), randStr, p);
        p += m;
    }

    fstream answer(OUT_FILE_NAME);
    answer << filestr << endl;
    answer.close();

    return 0;
}

char *strins(char *dest, const char *src, int pos)
{
    int len = strlen(src);
    char *newStr = new char[sizeof(char) * (strlen(dest) + len + 1)];
    strcpy(newStr, dest);
    for (int i = strlen(newStr); i >= pos; i--)
        newStr[i + len] = newStr[i];
    for (int j = pos; j < pos + len; j++)
        newStr[j] = src[j - pos];

    return newStr;
}
char *getRandStr(int n)
{
    char *randStr = new char[sizeof(char) * (n + 1)];

    srand(time(NULL));
    for (int i = 0; i < n; i++)
        randStr[i] = (char)(rand() % (126 - 32 + 1) + 32);
    randStr[n] = '\0';

    return randStr;
}
std::string readShaderSource(const char *filepath)
{
    std::string content;
    std::ifstream fileStream(filepath, std::ios::in);
    if (fileStream.fail())
    {
        std::cout << "ERROR::FILE::不能打开文件！::" << filepath << std::endl;
        getchar();
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