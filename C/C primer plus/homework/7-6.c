#include<stdio.h>
int main(void)
{
    char ch1,ch2;
    int n1;
    n1=0;

    printf("«Î ‰»Î“ª¥Æ◊÷∑˚£® ‰»Î#Õ£÷π£©:");
    while((ch1=getchar())!='#')
    {
        if(ch1=='e')
        {
            ch2=ch1;
        }
        else if(ch1=='i')
        {
            n1++;
        }

    }
    printf("%d",n1);

    return 0;
}
