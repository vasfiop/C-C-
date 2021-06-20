/*
Description
猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。 
第二天早上又将剩下的桃子吃掉一半，又多吃一个。
以后每天早上都吃了前一天剩下的一半零一个。 到第N天早上想再吃时，见只剩下一个桃子了。求第一天共摘多少桃子。
Input
N
Output
桃子总数
Sample Input
10
Sample Output
1534
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int a,sum;

    scanf("%d",&n);
    for(a=0,sum=1;a<n-1;a++)
    {
        sum++;
        sum*=2;
    }
    printf("%d\n",sum);
    
    return 0;
}
