/*
Description
写两个函数，分别求两个整数的最大公约数和最小公倍数，用主函数调用这两个函数，并输出结果两个整数由键盘输入。
Input
两个数
Output
最大公约数 最小公倍数
Sample Input
6 15
Sample Output
3 30
*/
#include<stdio.h>
int Big(int ,int);
int Small(int ,int ,int );
int main(int argc, char const *argv[])
{
    int x,y;
    int big,small;

    scanf("%d %d",&x,&y);
    big=Big(x,y);
    small=Small(big,x,y);
    printf("%d %d\n",big,small);

    return 0;
}
int Big(int x,int y)
{
    if(x%y==0)
        return y;
    else 
        Big(y,x%y);
}
int Small(int big,int x, int y)
{
    return x*y/big;
}