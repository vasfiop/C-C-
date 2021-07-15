#include <iostream>
#include <fstream>
#include <string>
#include <cString>
#include <cstdlib>

#define FILE_NAME "C:\\Users\\DELL\\Desktop\\C_C++\\C++\\answer.txt"    // 读取已经加密的文件
#define OUT_FILE_NAME "C:\\Users\\DELL\\Desktop\\C_C++\\C++\\crack.txt" // 解密的答案

using namespace std;

std::string readShaderSource(const char *filepath); // 读取文件函数
char *strindel(char *dest, int pos, int size);      // 删除指定字符串函数

int main()
{
    int n, m;
    string filestr; // 文件字符串

    (cin >> m >> n).get();

    filestr = readShaderSource(FILE_NAME);
    cout << filestr << endl;

    for (int i = m; i < filestr.length() - 1; i += m)
        filestr = strindel((char *)filestr.data(), i, n);
    cout << filestr << endl;

    if (filestr.length() < n)
    {
        cout << "文件长度小于" << n << endl;
    }
    else
    {
        for (int i = n; i < filestr.length() - 1 - n; i++)
        {
            char moddle;
            moddle = filestr[i];
            filestr[i] = filestr[i + n];
            filestr[i + n] = moddle;
        }
    }

    return 0;
}
char *strindel(char *dest, int pos, int size)
{
    int count = strlen(dest);
    for (int i = pos - 1; i + size < count; i++)
    {
        dest[i] = dest[i + size];
    }
    dest[count - size] = '\0';

    return dest;
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