#include <iostream>
#include <fstream>
#include <string>
#include <cString>
#include <cstdlib>
#include <ctime>

#define FILE_NAME "C:\\Users\\DELL\\Desktop\\C_C++\\C++\\test.txt"       // δ���ܵ��ļ���ַ
#define OUT_FILE_NAME "C:\\Users\\DELL\\Desktop\\C_C++\\C++\\answer.txt" // ���ܵ��ļ���ַ

std::string readShaderSource(const char *filepath); // ��ȡ�ļ�����(���������ʵ�Ƕ�ȡOpenGL glsl�ļ��ĺ���������ͨ��������ֱ�Ӹ���ճ��������)
char *getRandStr(int n);                            // �������ַ���
char *strins(char *dest, const char *src, int pos); // ���뺯��

using namespace std;

int main()
{
    int n, m;
    string filestr; // �ļ��ַ���

    (cin >> m >> n).get();

    filestr = readShaderSource(FILE_NAME);
    for (int i = 0; i < filestr.length() - 1; i++)
    {
        filestr[i] = filestr[i] + 3;
    }

    if (filestr.length() < n)
    {
        cout << "�ļ�����С��" << n << endl;
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
        std::cout << "ERROR::FILE::���ܴ��ļ���::" << filepath << std::endl;
        getchar();
    }
    else
        std::cout << "SUCCESS::FILE::�ļ��򿪲����ɹ�!" << std::endl;
    std::string line = "";
    while (!fileStream.eof())
    {
        getline(fileStream, line);
        content.append(line + "\n");
    }
    fileStream.close();
    return content;
}