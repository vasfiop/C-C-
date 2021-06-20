#include "all_file.h"
int count=0;
void progect(void);
int main(void)
{
    int a,num;

    printf("Please enter a number:");
    scanf("%d",&num);
    for(a=0;a<num;a++)
        progect();

    printf("%d\n",count);

    return 0;
}
void progect(void)
{
    printf("*******************************************\n");
    count++;
}
