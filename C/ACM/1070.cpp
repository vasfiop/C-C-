/*
Description
写一函数，使输入的一个字符串按反序存放，在主函数中输入输出反序后的字符串。
Input
一行字符
Output
逆序后的字符串

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
