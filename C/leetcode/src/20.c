#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool myTest_20(char *s);

char pairs(char a);
bool answerStack(char *s);

bool isValid(char *s)
{
    return myTest_20(s);
}
// 官方栈答案
bool answerStack(char *s)
{
    int n = strlen(s);
    if (n % 2 == 1)
        return false;

    int stk[n + 1], top = 0;
    for (int i = 0; i < n; i++)
    {
        char ch = pairs(s[i]);
        if (ch)
        {
            if (top == 0 || stk[top - 1] != ch) // 如果当前栈空 or stack[top-1] can not matching
                return false;
            top--;
        }
        else
            stk[top++] = s[i];
    }
    return top == 0;
}
char pairs(char a) // 挺巧妙的括号匹配机制
{
    if (a == '}')
        return '{';
    if (a == ']')
        return '[';
    if (a == ')')
        return '(';
    return 0;
}
// 我自己的答案
bool myTest_20(char *s)
{
    int sSize = strlen(s);
    if (sSize % 2)
        return false;

    char *stack = (char *)malloc(sizeof(char) * sSize + 1);
    int top = 0;

    for (int i = 0; i < sSize; i++)
    {
        stack[top] = s[i];
        if (top != 0)
        {
            switch (s[i])
            {
            case ']':
            case '}':
                if (stack[top] - 2 == stack[top - 1])
                    top -= 2;
                break;
            case ')':
                if (stack[top] - 1 == stack[top - 1])
                    top -= 2;
                break;
            }
        }
        top++;
    }

    if (top > 0)
        return false;
    else
        return true;
}