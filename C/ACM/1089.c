/*
Description
������N��ѧ�������ݼ�¼��ÿ����¼����ѧ�š����������Ƴɼ��� ��дһ������input,��������һ��ѧ�������ݼ�¼�� 
��дһ������print,��ӡһ��ѧ�������ݼ�¼�� ��������������������������ȡN����¼���룬�ٰ�Ҫ������� N<100
Input
ѧ������Nռһ�� ÿ��ѧ����ѧ�š����������Ƴɼ�ռһ�У��ո�ֿ���
Output
ÿ��ѧ����ѧ�š����������Ƴɼ�ռһ�У����ŷֿ���
Sample Input
2
a100 zhblue 70 80 90
b200 newsclan 90 85 75
Sample Output
a100,zhblue,70,80,90
b200,newsclan,90,85,75
*/
#include<stdio.h>
#define MAX 100
struct student
{   
    char non[100];
    char name[100];
    int a;
    int b;
    int c;
};
void Input(struct student students[],int n);
void Printf(struct student students[],int n);
int main(int argc, char const *argv[])
{
    struct student students[MAX];
    int n;

    scanf("%d",&n);
    Input(students,n);
    Printf(students,n);

    return 0;
}
void Input(struct student students[],int n)
{
    int x;

    for(x=0;x<n;x++)
        scanf("%s %s %d %d %d",&students[x].non,&students[x].name,&students[x].a,&students[x].b,&students[x].c);
}
void Printf(struct student students[],int n)
{
    int x;

    for(x=0;x<n;x++)
    {
        printf(students[x].non);
        printf(",");
        printf(students[x].name);
        printf(",%d,%d,%d\n",students[x].a,students[x].b,students[x].c);
    }
}