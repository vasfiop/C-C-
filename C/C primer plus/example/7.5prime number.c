//������
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
        for(div=2,isprime=true;(div*div)<=num;div++)//div*div�ܱ�ֻ֤�����һ��Ĳ���
        {
            if(num%div==0)//�ܱ�������˵���Ͳ�������
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
