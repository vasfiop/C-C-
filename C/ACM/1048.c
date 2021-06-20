/*
Description
给出一个不多于5位的整数，
要求
1、求出它是几位数
2、分别输出每一位数字
3、按逆序输出各位数字，例如原数为321,应输出123
Input
一个不大于5位的数字
Output
三行
第一行 位数
第二行 用空格分开的每个数字，注意最后一个数字后没有空格
第三行 按逆序输出这个数
Sample Input
12345
Sample Output
5
1 2 3 4 5
54321
*/
#include<stdio.h>
int main(void)
{
    int num,count,a;
    int wei[5];

    scanf("%d",&num);
    for(a=0,count=0;num;a++,count++)
    {
        wei[a]=num%10;
        num/=10;
    }
    printf("%d\n",count);
    for(a=count-1;a>=0;a--)
    {
        printf("%d",wei[a]);
        if(a)
            printf(" ");
    }
    printf("\n");
    for(a=0;a<count;a++)
        printf("%d",wei[a]);

    return 0;
}
