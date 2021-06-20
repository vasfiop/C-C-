//求素数
#include<stdio.h>
#include<stdbool.h>
int main(void)
{
    unsigned long num;
    unsigned long div;
    bool isprime;

    printf("Please enter an integer for analysis; Enter q to quit.\n");
    while(scanf("%lu",&num)==1)
    {
        for(div=2,isprime=true;(div*div)<=num;div++)//div*div能保证只会计算一半的部分
        {
            if(num%div==0)//能被整除，说明就不是素数
            {
                if((div*div)!=num)
                    printf("%lu is divisible by %lu and %lu.\n",num,div,num/div);
                else
                    printf("%lu is divisible by %lu.\n",num,div);
                isprime=false;
            }
        }
        if(isprime)
            printf("%lu is prime.\n",num);
        printf("Please enter another integer for analysis; Enter q to quit.\n");
    }
    printf("Bye!.\n");

    return 0;
}
