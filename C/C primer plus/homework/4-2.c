#include<stdio.h>
#include<string.h>
int main(void)
{
    char first_name[40];
    char last_name[40];

    printf("�������������:");
    scanf("%s",first_name);
    printf("�������������:");
    scanf("%s",last_name);
    printf("�������:\"%s %s\"\n",first_name,last_name);
    printf("�������:%20s%20s\n",first_name,last_name);
    printf("�������:%-20s%-20s\n",first_name,last_name);
    printf("�������:%*s %*s",strlen(first_name)+3,first_name,strlen(last_name)+3,last_name);

    return 0;

}
