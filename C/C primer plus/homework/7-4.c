#include<stdio.h>
int main(void)
{
    char ch;
    int n1,n2;
    n1=n2=0;

    printf("«Î ‰»Î“ª¥Æ◊÷∑˚£® ‰»Î#Õ£÷π£©:");
    while((ch=getchar())!='#')
    {
        if(ch=='.')
        {
            putchar('!');
            n1++;
        }
        else if(ch=='!')
        {
            putchar('!');
            putchar('!');
            n2++;
        }
        else
        {
            putchar(ch);
        }
    }
    printf("æ‰∫≈ÃÊªª=%d,∏–Ãæ∫≈ÃÊªª=%d\n",n1,n2);

    return 0;
}
