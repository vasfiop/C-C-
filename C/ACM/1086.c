/*
Description
有n人围成一圈，顺序排号。从第1个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来的第几号的那位。
Input
初始人数n
Output
最后一人的初始编号
Sample Input
3
Sample Output
2
*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int n;
    int a,b;
    int *num;
    int count;//计数提出去的人

    scanf("%d",&n);
    num=(int *)malloc(sizeof(int)*n);//创建数组
    for(a=0;a<n;a++)//赋初值，1是还在的人，0是不在的人，下标+1位排序
        num[a]=1;
    for(a=0,b=0,count=0;count!=(n-1);a++)//如果已经有n-1个人被踢了出去，就退出循环
    {
        a=a%n;
		if(num[a]==0)//如果当前位置已经被踢出去就重新判断
			continue;
        b++;
        if(b==3)//b用来报数，如果是3，就直接踢出去
        {
            num[a]=0;
            b=0;
            count++;
        }
    }
    for(a=0;a<n;a++)//找到唯一留下来的人
        if(num[a])
            break;
    printf("%d\n",a+1);

    return 0;
}
