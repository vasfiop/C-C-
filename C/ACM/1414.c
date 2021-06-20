/*
Description
出题人对斐波那契数列有着自己特别的爱。为什么呢？因为斐波那契数列很美。
费波那西数列又译费波拿契数、斐波那契数列、费氏数列、黄金分割数列。
指的是这样一个数列：0、1、1、2、3、5、8、13、21、……在数学上，斐波纳契数列以如下被以递归的方法定义：F0=0，F1=1，Fn=F(n-1)+F(n-2)（n>=2，n∈N*）
开普勒发现数列前、后两项之比1/2 ,2/3 , 3/5 ,5/8 ,8/13 ,13/21 ,21/34 ,...... ,也组成了一个数列，会趋近黄金分割。
许多的生物构成都和斐波那契数列有正相关,向日葵的种子螺旋排列99%是F_n，
例如人体从脚底至头顶之距离和从肚脐至脚底之距趋近于\lim_{n \to \infty}\frac{F_n}{F_{(n-1)}}。
斐波那契数与植物花瓣
3………………………百合和蝴蝶花
5………………………蓝花耧斗菜、金凤花、飞燕草、毛茛花
8………………………翠雀花
13………………………金盏，玫瑰
等等。
所以斐波那契数列是很美的数列。因为美，所以出题人想让他更美一点。那就是按顺序出去斐波那契数列前n项，包含第n项的素数。
Input
测试数据只有一组，为一个正整数，n。保证n小于等于40.
Output
输出为n行，每行一个正整数为结果，按从小到大输出。记住0是斐波那契数列的第0项。
Sample Input
10
Sample Output
2
3
5
13
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int f1,f2,f3;
    int a;

    scanf("%d",&n);
    f1=0;
    f2=1;
    for(a=0;a<n;a++)
    {
        f3=f1+f2;
        printf("%d\n",f3);
        f1=f2;
        f2=f3;
    }

    return 0;
}
