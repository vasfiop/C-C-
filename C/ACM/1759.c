/*
Description
算法训练  确定元音字母位置    
时间限制：1.0s     内存限制：512.0MB 
      
输入一个字符串，编写程序输出该字符串中元音字母的首次出现位置，如果没有元音字母输出0。英语元音字母只有‘a’、‘e’、‘i’、‘o’、‘u’五个。 
样例输入:  
hello
样例输出: 
2 
样例输入:  
apple 
样例输出: 
1 
样例输入:  
pmp 
样例输出: 
0 
*/
#include<stdio.h>
#include<string.h>
char Yuan[6]="aeiou";
int main(int argc, char const *argv[])
{
    char str[1000];
    int a,b;
    int find;
    int size;

    gets(str);
    size=strlen(str);
    for(a=0,find=0;a<size;a++)
    {
        for(b=0;b<5;b++)
            if(str[a]==Yuan[b])
            {
                find=a+1;
                break;
            }
        if(find)
            break;
    }
    printf("%d\n",find);

    return 0;
}
