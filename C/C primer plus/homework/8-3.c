#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int big,small;
    big=small=0;

    printf("ÇëÊäÈëÒ»´®×Ö·ûCtrl+ZÍ£Ö¹:");
    while((ch=getchar())!=EOF)
    {
        if(ch=='\n')
            continue;
        if(islower(ch))
            small++;
        else if(isupper(ch))
            big++;
    }
    printf("Ğ¡Ğ´×ÖÄ¸=%d£¬´óĞ´×ÖÄ¸=%d.\n",small,big);

    return 0;
}
