#include "biaodshi.h"
#include "mystructure.h"
int main(int argc, char const *argv[])
{
    char *postfix;//��׺���ʽ
    char *infix;//��׺���ʽ

    root=NULL;//����ʼ��

    postfix=(char *)malloc(sizeof(char)*SIZE);
    infix=(char *)malloc(sizeof(char)*SIZE);
    gets_s(infix,SIZE);
    postfix=GetPostfix(infix);

    top=-1;
    for(int a=0;a<strlen(postfix);a++)
        stack[++top]=postfix;
    puts(stack);

    return 0;
}
