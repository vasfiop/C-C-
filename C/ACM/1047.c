/*
Description
给出一百分制成绩，要求输出成绩等级‘A’、‘B’、‘C’、‘D’、‘E’。
90分以上为A 80-89分为B 70-79分为C 60-69分为D 60分以下为E
Input
一个整数0－100以内
Output
一个字符，表示成绩等级
Sample Input
90
Sample Output
A
*/
#include<stdio.h>
int main(void)
{
    int num;
    char ch;

    scanf("%d",&num);
    switch(num/10)
    {
        case 10:
        case 9:
            ch='A';
            break;
        case 8:
            ch='B';
            break;
        case 7:
            ch='C';
            break;
        case 6:
            ch='D';
            break;
        default :
            ch='E';
            break;
    }
    printf("%c\n",ch);

    return 0;
}
