#include<stdio.h>
#include<string.h>
int main(void)
{
    float high;
    printf("�����������ߣ���λӢ�磩:\n");
    scanf("%f",&high);
    printf("Debney,you are %.*f feet tall.\n",sizeof(high)-1,high);

    return 0;
}
