#include<stdio.h>
int main(void)
{
    int n1,n2;
    float f1,f2;

    printf("请输入一个次数:");
    scanf("%d",&n1);
    while(n1>0)
    {
        for(f1=1.0,n2=0,f2=0;n2<=n1;n2++,f1++)//加法
        {
            f2=1.0/f1+f2;
        }
        printf("%.12f\n",f2);
        printf("请输入一个次数:");
        scanf("%d",&n1);
    }


    return 0;
}
