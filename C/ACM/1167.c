/*
Description
编制函数，其功能是在float类型一维数组中查找最大值、最小值，并将它们返回到调用程序。
* 输出保留两位小数
Input
n
n个浮点数
Output
最大值 最小值
Sample Input
10
1.0
2.0
3.0
4.0
5.0
6.0
7.0
8.0
9.0
10.0
Sample Output
10.00 1.00
*/
#include<stdio.h>
#include<stdlib.h>
float Max(float *,int );
float Min(float *,int );
int main(int argc, char const *argv[])
{
    int n;
    int a;
    float max,min;
    float *num;

    scanf("%d",&n);
    num=(float *)malloc(sizeof(float)*n);//创建数组
    for(a=0;a<n;a++)
        scanf("%f",&num[a]);
    max=Max(num,n);
    min=Min(num,n);
    printf("%.2f %.2f\n",max,min);
    //断点位置
    return 0;
}
float Max(float * num,int n)
{
    float s;
    int a;

    s=num[0];
    for(a=1;a<n;a++)
        if(s<num[a])
            s=num[a];

    return s;
}
float Min(float *num , int n)
{
    float s;
    int a;

    s=num[0];
    for(a=1;a<n;a++)
        if(s>num[a])
            s=num[a];

    return  s;
}

