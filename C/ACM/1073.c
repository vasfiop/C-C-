/*
Description
дһ����������һ����λ���֣�Ҫ��������ĸ������ַ�����ÿ�������ּ�ո�������1990��Ӧ���"1 9 9 0"��
Input
һ����λ��
Output
���ӿո����
Sample Input
1990
Sample Output
1 9 9 0 
*/
#include<stdio.h>
void OutPut(int num);
int main(int argc, char const *argv[])
{
    int num;

    scanf("%d",&num);
    OutPut(num);
    printf("\n");

    return 0;
}
void OutPut(int num)
{
    int n[4];
    int a;

    a=3;
    while(num)
    {
        n[a--]=num%10;
        num/=10;
    }
    for(a=0;a<4;a++)
        printf("%-2d",n[a]);
}