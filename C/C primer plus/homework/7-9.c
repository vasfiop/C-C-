#include<stdio.h>
int main(void)
{
    int num1,num2,n1;

    printf("请输入一个正整数:");
    while(!scanf("%d",&num1)&&num1<=0)
    {
        printf("请输入一个正整数:");
    }
    num2=2;
    n1=1;
    while((num2*num2)<=num1)
    {
        if((num1%num2)==0)
        {
            if((num2*num2)==num1)
            {
                printf("%d=%d的平方.\n",num1,num2);
            }
            else if(num2!=1)
            {
                printf("%d=%d乘%d.\n",num1,num2,num1/num2);
            }
            n1=0;
        }
        if(n1)
        {
            printf("%d是素数.\n",num1);
            break;
        }
        num2++;
    }

    return 0;
}
