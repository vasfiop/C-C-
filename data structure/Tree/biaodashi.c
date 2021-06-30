#include "biaodshi.h"
#include "mystructure.h"
int main(int argc, char const *argv[])
{
    char *postfix;//后缀表达式
    char *infix;//中缀表达式

    root=NULL;//树初始化

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
