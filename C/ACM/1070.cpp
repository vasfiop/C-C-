/*
Description
дһ������ʹ�����һ���ַ����������ţ�������������������������ַ�����
Input
һ���ַ�
Output
�������ַ���

Sample Input
123456abcdef
Sample Output
fedcba654321
*/
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
void OutDown(string &str, int size);
int main(int argc, char const *argv[])
{
    string str;
    int size;
    int a;

    cin>>str;
    size=str.length();
    OutDown(str,size);
    cout<<str;

    return 0;
}
void OutDown(string &str, int size)
{
    char ch;

    for(int i=0;i<size/2;i++)
    {
        ch=str[i];
        str[i]=str[size-i-1];
        str[size-i-1]=ch;
    }
}
