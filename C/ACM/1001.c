/*
由于我们只知道ASCII码，所以您的工作很简单:输入数字并输出相应的消息。
输入
输入将包含由空格(空格、换行符、制表符)分隔的正整数列表。请处理到文件末尾(EOF)。
整数不小于32。
输出
输出相应的消息。注意，输出的末尾没有换行符。
*/
#include<stdio.h>
int main(void)
{
    int num;

    while(scanf("%d",&num)!=EOF)
        printf("%c",num);

    return 0;
}
