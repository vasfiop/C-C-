/*
Description
AunSmile最近很不开心，因为zhuiqu总是抢他的ps4和猫玩。
于是AunSmile打算跟zhuiqu玩-个游戏，猜数字。
AunSmile将想一个数字当做谜底，再挑出几个数字让zhuiqu猜。
但是AunSmile很机智，多挑了几组，如果zhuiqu都能猜 出来，
那么ps4跟猫今天都归zhuiqu啦!谜底数是三个数的最小公倍数。
Input
一行，三个整数
Output
输出谜底。均保证在int范围内
Sample Input
1 2 3
Sample Output
6
*/
#include<stdio.h>
int gcd(int x,int y);
int main(int argc, char const *argv[])
{
    int a,b,c;
    int middle;
    int s1,s2;
    int d1;
    
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        s1=gcd(a,b);//先算a和b的最大公因数
        s2=gcd(b,c);//再算b和c的最大公因数
        d1=a*b*c/(s1*s2);
        printf("%d\n",d1);
    }

    return 0;
}
int gcd(int x,int y)
{
    if(x%y==0)
        return y;
    else 
        gcd(y,x%y);
}
