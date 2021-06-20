/*
Description
输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。写三个函数； ①输入10个数；②进行处理；③输出10个数。
Input
10个整数
Output
整理后的十个数，每个数后跟一个空格（注意最后一个数后也有空格）
Sample Input
2 1 3 4 5 6 7 8 10 9
Sample Output
1 2 3 4 5 6 7 8 9 10 
*/
#include<stdio.h>
#define SIZE 10
void Input(int *);
void Switch(int *);
void Output(int *);
int main(int argc, char const *argv[])
{
    int num[SIZE];

    Input(num);
    Switch(num);
    Output(num);

    return 0;
}
void Input(int *num)
{
    int a;

    for(a=0;a<SIZE;a++)
        scanf("%d",&num[a]);
}
void Switch(int *num)
{
    int max,min;
    int middle;
    int a;

    max=min=num[0];
    for(a=1;a<SIZE;a++)
    {
        if(max<num[a])
            max=num[a];
        if(min>num[a])
            min=num[a];
    }
    for(a=0;a<SIZE;a++)
    {
        if(max==num[a])
        {
            middle=num[a];
            num[a]=num[9];
            num[9]=middle;
        }
        if(min==num[a])
        {
            middle=num[a];
            num[a]=num[0];
            num[0]=middle;
        }
    }
}
void Output(int *num)
{
    int a;

    for(a=0;a<SIZE;a++)
        printf("%d ",num[a]);
    printf("\n");
}