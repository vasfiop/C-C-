/*
1468：
Description
水仙花数是指，一个三位数，各个位上的立方和，恰等于这个数
Input
整数n表示，测试数据的个数，接下来n行每行一个整数
Output
Y或N
Sample Input
4
153
111
0
1111
Sample Output
Y
N
N
N
*/
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n;
    int num;
    int find;
    int a;
    int ge,shi,bai;

    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        scanf("%d",&num);
        find=1;
        if(num<100||num>=1000)
            find=0;
        ge=num%10;
        shi=num/10%10;
        bai=num/100;
        if(pow(ge,3)+pow(shi,3)+pow(bai,3)==num&&find==1)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}
