#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 20

char stack[SIZE];
int top;

int Postfix(char *postfix);//后缀表达式算法
char *GetPostfix(char *infix);//中缀表达式转换后缀表达式

int main(int argc, char const *argv[])
{
    char infix[SIZE];
    char *postfix;

    printf("请输入中缀算式:");
    gets(infix);
    postfix=GetPostfix(infix);
    printf("结果是：%d\n",Postfix(postfix));
    
    return 0;
}
char *GetPostfix(char *infix)
{
    char *postfix;
    int size;
    int size_post;
    int a;

    postfix=(char *)malloc(sizeof(char)*SIZE);
    size_post=top=-1;
    size=strlen(infix);

    for(a=0;a<size;a++)
    {
        switch(infix[a])
        {
            case '(':
            case '/':
            case '*':
                stack[++top]=infix[a];
                break;
            case '-':
            case '+':
                if((stack[top]=='*'||stack[top]=='/')&&top>=0)
                {
                    while(top!=-1&&stack[top]!='(')
                        postfix[++size_post]=stack[top--];
                    stack[++top]=infix[a];
                }
                else
                    stack[++top]=infix[a];
                break;
            case ')':
                while(stack[top]!='(')
                    postfix[++size_post]=stack[top--];
                top--;
                break;
            default:
                postfix[++size_post]=infix[a];
                break;
        }
    }
    while(top!=-1)
        postfix[++size_post]=stack[top--];
    postfix[++size_post]='\0';
    
    return postfix;
}
int Postfix(char *postfix)
{
    int size;
    int stack[SIZE];

    size=strlen(postfix);
    top=-1;

    for(int a=0;a<size;a++)
    {
        switch (postfix[a])
        {
            case '+':stack[top]=stack[top--]+stack[top];
                break;
            case '-':stack[top]=stack[top--]-stack[top];
                break;
            case '*':stack[top]=stack[top--]*stack[top];
                break;
            case '/':stack[top]=stack[top--]/stack[top];
                break;
            default:stack[++top]=postfix[a]-48;
                break;
        }
    }

    return stack[top];
}