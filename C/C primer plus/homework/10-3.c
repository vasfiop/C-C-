#include<stdio.h>
int num(int n[2]);
int main(void)
{
    int a[2];
    int c,r;

    printf("请输入两个数字:");
    for(c=0;c<2;c++)
    {
        scanf("%d",&r);
        a[c]=r;
    }
    c=num(a);
    printf("max=%d",c);

    return 0;
}
int num(int n[2])
{
    if(n[1]>n[0])
        return n[1];
    else
        return n[0];
}
