#include "all_file.h"//����ĳ���Ա����Ҫ����
#include "s_gets.h"
#define LEN 80
void jump_over(char *s1);
int main(void)
{
    char ch1[LEN];

    printf("Enter a string:");
    while(s_gets(ch1,LEN))
    {
        jump_over(ch1);
        puts(ch1);
        puts("Enter a new string:");
    }
    puts("Done");

    return 0;
}
void jump_over(char *s1)
{
    char *ch;

    while(*s1)
    {
        if(*s1==' ')
        {
            ch=s1;
            while(*ch)
            {
                *ch=*(ch+1);
                ch++;
            }
        }
        else
            s1++;
    }
}
