#include<stdio.h>
#define up 10
int main(void)
{
    int num,bug;

    printf("������һ������:\n");
    scanf("%d",&num);
    printf("\n");
    bug=num;
    while(num<bug+11)
    {
        printf("%d\n",num);
        num++;
    }

    return 0;
}
