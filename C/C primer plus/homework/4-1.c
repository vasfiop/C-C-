#include<stdio.h>
int main(void)
{
    char first_name[40];
    char last_name[40];

    printf("�����������:\n");
    scanf("%s",first_name);
    printf("�������������:\n");
    scanf("%s",last_name);
    printf("�������:\"%s,%s\"",first_name,last_name);

    return 0;
}
