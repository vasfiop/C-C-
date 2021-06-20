#include<stdio.h>
int main(void)
{
    char ch;
    int c;

    printf("ÇëÊäÈëÒ»´®×Ö·û£¨Ctrl+ZÍ£Ö¹£©:");
    while((ch=getchar())!=EOF)
    {
        if(ch=='\n')
            continue;
        putchar(ch);
        printf(" %3d\n",ch);

    }

    return 0;
}
