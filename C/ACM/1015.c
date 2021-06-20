/*
Description
蛇形矩阵是由1开始的自然数依次排列成的一个矩阵上三角形。
Input
本题有多组数据，每组数据由一个正整数N组成。（N不大于100）
Output
对于每一组数据，输出一个N行的蛇形矩阵。
两组输出之间不要额外的空行。
矩阵三角中同一行的数字用一个空格分开。
行尾不要多余的空格。
Sample Input
5
Sample Output
1 3 6 10 15
2 5 9 14
4 8 13
7 12
11
*/
#include<stdio.h>
int main(void)
{
    int N,a,b,c,num,up1;

    while(scanf("%d",&N)!=EOF)
    {
        for(a=1,up1=1;a<=N;a++)
        {
            for(c=N-a,num=up1+=(a-1),b=1+a;c>=0;b++,c--)
            {

                printf("%d",num);
                if(c)
                    printf(" ");
                num+=b;
            }
            printf("\n");
        }
    }

    return 0;
}
