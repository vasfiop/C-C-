/*
Description
我们经常会在一篇文章中查找某个关键词，其本质就是字符串搜索，请你编写一段程序判断一个指定的字符串在另一个字符串中出现的次数。
Input
每行两个字符串，中间用一个空格分开。
Output
第一个字符串在第二个字符串中出现的次数。
Sample Input
自 上海自来水来自海上
自来水 上海自来水来自海上
abc abdefgadcbef
Sample Output
2
1
0
*/
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str_1[1000],str_2[1000];
    int size_1,size_2;
    int a,b;
    int count;
    int find;

    while(scanf("%s",str_1)!=EOF)
    {
        scanf("%s",str_2);
        size_1=strlen(str_1);
        size_2=strlen(str_2);
        for(a=0,count=0;a<size_2;a++)
        {
            if(str_2[a]==str_1[0])
            {
                for(b=0,find=1;b<size_1;b++,a++)
                    if(str_1[b]!=str_2[a])
                        find=0;
                if(find)
                    count++;
                a--;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
