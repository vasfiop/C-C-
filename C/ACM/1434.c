/*
1434：
Description
Polo最近很苦恼，数学老师给了他一堆数字，告诉他，每行是一个可能构成三角形的三边值（都是整数，且均为正数，并小于1000），老师要求，对于每一行，要先判断能不能构成三角形，
要是不能，Polo得给出“NO”的结论，要是能，他得计算出该三角形的面积。你能帮帮Polo吗？
Input
有多组测试数据。每组测试数据先输入一个N表示本组有N个测试数据，接下来有N行数据，每行有3个整数，表示三角形的三边值。
Output
每行显示出“NO”（当不构成三角形时）或 三角形的面积（仅保留两位小数）。
Sample Input
3
1 2 3
3 4 5
4 1 1
Sample Output
NO
6.00
NO
*/
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n;
    int a;
    int x,y,z;
    double squr;
    double p;

    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(x+y>z&&x-y<z)
        {
            p=(x+y+z)/2;
            squr=pow(p*(p-x)*(p-y)*(p-z),0.5);
            printf("%.2f\n",squr);
        }
        else 
            printf("NO\n");
    }

    return 0;
}
