/*
Description
输入三个字符串，按由小到大的顺序输出
Input
3行字符串
Output
按照从小到大输出成3行
Sample Input
cde
afg
abc
Sample Output
abc
afg
cde
*/
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[3][1000];
    char middle[1000];
    int a,b,c;
    
    for(a=0;a<3;a++)//处理输入
        scanf("%s",str[a]);

    for(a=0;a<3;a++)
        for(b=a+1,c=0;b<3;b++)
        {
            if(str[a][c]>str[b][c])
            {
                strcpy(middle,str[a]);
                strcpy(str[a],str[b]);
                strcpy(str[b],middle);
            }
            if(str[a][c]==str[b][c])
            {
                c++;
                b--;
                continue;
            }
        }
    for(a=0;a<3;a++)
        puts(str[a]);

    return 0;
}
