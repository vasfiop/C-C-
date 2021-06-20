#include<stdio.h>
#include<string.h>
int main(void)
{
    char first_name[40];
    char last_name[40];
    int num_first,num_last;

    printf("ÇëÊäÈëÄãµÄĞÕÊÏ:\n");
    scanf("%s",first_name);
    printf("ÇëÊäÈëÄãµÄÃû×Ö:\n");
    scanf("%s",last_name);
    printf("%s %s\n",first_name,last_name);
    num_first=strlen(first_name);
    num_last=strlen(last_name);
    printf("%*d %*d\n",num_first,num_first,num_last,num_last);
    printf("%s %s\n",first_name,last_name);
    printf("%*-d %*-d\n",num_first,num_first,num_last,num_last);


    return 0;
}
