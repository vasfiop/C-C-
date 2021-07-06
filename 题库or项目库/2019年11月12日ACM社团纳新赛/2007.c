/*Description
每一个函数的最值问题总能让leslee想起高中做函数大题时的快乐，leslee刚看到这道题目时兴奋得关闭了idea并打开了炉石传说，和旅店老板讨论起如何用最快的方法求出函数的最值。
假如你现在是旅店老板，有一个函数f(x)=4*a*exp(-x)-b*x+6*c*ln(x)-d*sin(2*x)+e*sqrt(x)。
x的取值范围为[1,100]，x为整数。求函数的最大值与最小值，并保留两位小数。
Input
输入a，b，c，d，e五个数。
a，b，c，d，e均为整数，且0<=a,b,c,d,e<=10。
Output
输出函数最小值与最大值，中间用空格隔开。
Sample Input
2 9 9 7 6
Sample Output
-585.21 61.23
HINT
leslee:"ln函数在代码中用log求"
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,c,d,e,x;
    double fx,lastfx,bigfx,smalefx;

    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)!=EOF)
    {
        for(x=1;x<=100;x++)
        {
            lastfx=fx;
            fx=4*a*exp(-x)-b*x+6*c*log()-d*sin(2*x)+e*sqrt(x);
            if(fx>lastfx)
                bigfx=fx;
            else
                smalefx=lastfx;
        }
        printf("%f %f\n",bigfx,smalefx);
    }
    return 0;
}
