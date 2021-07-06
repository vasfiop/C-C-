/*
Description
乐乐大仙很喜欢找人一起吃麦当劳
特别是leslee！没错，但是leslee最近看了演唱会，穷了，于是甩开了乐乐大仙
可怜的乐乐大仙只好去找其他人了，可是，就连最喜欢吃麦当劳的麦思源都被大仙烦怕了，于是，孤独无奈的大仙，只好蹲在墙角，想着麦当劳的矩形盘子
没错，就是这样的！
当然，大仙想着想着，就饿晕了，把矩形的麦当劳看成了由字符组成的，菱形（其实是四边相等的正方形）麦当劳投喂给大仙吧！
提示，为了让大家看的方便，大仙主动将空格替换为了。
意思是输出中的。其实是一个空格来着
Input
一组数据一行
一行中首先输入一个字符（组成四边相等的菱形的基本单元），空一格格，输入一个数字n，n为边长
Output
输出一个菱形
样例中空格部分被替代为了。号 哦！
Sample Input
X 4
0 6
Sample Output
。。。X
。。X。。X
。X。。。。X
X。。。。。。X
。X。。。。X
。。X。。X
。。。X
。。。。。0
。。。。0。。0
。。。0。。。。0
。。0。。。。。。0
。0。。。。。。。。0
0。。。。。。。。。。0
。0。。。。。。。。0
。。0。。。。。。0
。。。0。。。。0
。。。。0。。0
。。。。。0
*/
#include<stdio.h>
int main(void)
{
    char ch;
    int a,n,b,c,really;

    while(scanf("%c %d",&ch,&n)!=EOF)
    {
        getchar();
        for(a=0;a<n;a++)
        {
            for(b=n-a-1;b>0;b--)
                printf("。");
            printf("%c",ch);
            for(c=0;c<a*2;c++)
                printf("。");
            if(a)
                printf("%c",ch);
            printf("\n");
        }
        for(a=0;a<n-1;a++)
        {
            for(b=0;b<=a;b++)
                printf("。");
            printf("%c",ch);
            for(c=0;c<(n-2-a)*2;c++)
                printf("。");
            if(a!=n-2)
                printf("%c",ch);
            printf("\n");
        }
    }
    return 0;
}
