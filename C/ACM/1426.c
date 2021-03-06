/*
Description
邱老师有个6岁的儿子，一天突然问邱老师鸡兔同笼的问题怎么解决。
邱老师一想，这不可能用列方程式的方法来讲，只好在网上搜了一下，终于找到了一种霸气的解决办法来讲这个问题。
先换了几个数字简化了一下题目：假如一个笼子里有若干只鸡和兔子（不考虑畸形和残疾），现在数出来头有12个，脚有40只，
想知道鸡和兔子各有多少只？解决办法：（通过拟人化的语气）现在爸爸手里有一种特殊的枪，每开一枪，
所有的动物会自动举起一条腿。爸爸先啪啪开了两枪，这时候所有的鸡都趴在了笼子里，
每只兔子却还剩下两条腿站着（这时候站着的腿数就变成了40-12-12=16），所以，兔子总共有16的一半，即8只，
当然，鸡就只有12-8=4只喽。儿子听得哈哈大笑，马上就反问了：如果有40个头，55只脚，....， 邱老师一听，脸都绿了。
你能写个程序，帮邱老师算算么？
Input
有若干组测试数据。每一行有两个整数，分别表示头数和脚数。0 0结束
Output
每行输出鸡的数量及兔子的数量，如果无解，则输出NO。
Sample Input
12 40
40 55
35 100
0 0
Sample Output
4 8
NO
20 15
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int h,d;//h是头的数量，d是叫的数量
    int check,reb;//check是鸡的数量，reb是兔子
    
    scanf("%d %d",&h,&d);
    while(h&&d)
    {
        reb=(d-(h*2))/2;
        check=h-reb;
        if(reb>0&&check>0)
            printf("%d %d\n",check,reb);
        else 
            printf("NO\n");
        scanf("%d %d",&h,&d);
    }

    return 0;
}
