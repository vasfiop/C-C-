/*
描述
第一行整数表示输入整数a和b的个数。你的任务是计算a + b。
输入
你的任务是计算a + b。第一行整数表示输入整数对的数目。
输出
对于每一对输入整数a和b，您应该在一行中输出a和b的和，并且在输入中的每一行都有一行输出。
Sample Input
2
1 5
10 20
Sample Output
6
30
*/
#include<stdio.h>
int main(void)
{
    int n,a,all_num,b;
    int all[n];

    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        all_num=0;
        for(b=0;b<2;b++)
        {
            scanf("%d",&all[b]);
            all_num+=all[b];
        }
        printf("%d\n",all_num);
    }

    return 0;
}
