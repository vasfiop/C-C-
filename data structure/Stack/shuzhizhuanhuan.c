// ��ֵת��
#include<stdio.h>
#define SIZE 200

char stack[SIZE];
int top=-1;

int main(int argc, char const *argv[])
{
    int number;
    int R;

    printf("������һ�����֣�");
    scanf("%d",&number);
    printf("��������Ҫת���Ľ���:");
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
