#include<stdio.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
    char choose='p';
    int ch;

    switch(argv[1][1])
    {
        case 'p':
        case 'u':
        case 'l':
            choose=argv[1][1];
            break;
    }
    while((ch=getchar())!=EOF)
    {
        switch(choose)
        {
            case 'p':
                putchar(ch);
                break;
            case 'u':
                putchar(toupper(ch));
                break;
            case 'l':
                putchar(tolower(ch));
                break;
        }
    }

    return 0;
}
