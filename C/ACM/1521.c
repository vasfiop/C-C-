/*
Description
判断一个英文字符串是否是回文
Input
整数n，接下来有n个字符串，每串1行
Output
Y或N
Sample Input
2
abccba
abccbA
Sample Output
Y
N
*/
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int n;
    char str[1000];
    int a,b,c;
    int size;
    int find;
    
    scanf("%d",&n);
    fflush(stdin);
    for(a=0;a<n;a++)
    {
        gets(str);
        size=strlen(str);
        for(b=0,find=1,c=size-1;b<size;b++,c--)
            if(str[b]!=str[c])
            {
                find=0;
                break;
            }  
        if(find)   
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}
