/*
Description
现有有N个学生的数据记录，每个记录包括学号、姓名、三科成绩。 编写一个函数input,用来输入一个学生的数据记录。 
编写一个函数print,打印一个学生的数据记录。 在主函数调用这两个函数，读取N条记录输入，再按要求输出。 N<100
Input
学生数量N占一行 每个学生的学号、姓名、三科成绩占一行，空格分开。
Output
每个学生的学号、姓名、三科成绩占一行，逗号分开。
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