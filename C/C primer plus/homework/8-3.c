#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int big,small;
    big=small=0;

    printf("������һ���ַ�Ctrl+Zֹͣ:");
    while((ch=getchar())!=EOF)
    {
        if(ch=='\n')
            continue;
        if(islower(ch))
            small++;
        else if(isupper(ch))
            big++;
    }
    printf("Сд��ĸ=%d����д��ĸ=%d.\n",small,big);

    return 0;
}
