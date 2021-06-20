/*
Description
����10����������������С�������һ�����Ի����������������һ�����Ի���д���������� ������10�������ڽ��д��������10������
Input
10������
Output
������ʮ������ÿ�������һ���ո�ע�����һ������Ҳ�пո�
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