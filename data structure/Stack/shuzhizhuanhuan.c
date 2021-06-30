// 数值转换
#include<stdio.h>
#define SIZE 200

char stack[SIZE];
int top=-1;

int main(int argc, char const *argv[])
{
    int number;
    int R;

    printf("请输入一个数字：");
    scanf("%d",&number);
    printf("请输入想要转换的进制:");
    scanf("%d",&R);

    while(number)
    {
        stack[++top]=number%R;
        number/=R;
    }
    while(top!=-1)
        printf("%d",stack[top--]);

    return 0;
}
