/*AunSmile 有一个很长很长的架子, 架子有 z 个格子(1 <= z <= 10000),
架子上有 x 个手办(0 <= x < 5000), 一个格子里放一个,
并且所有的手办都是不相邻的,
因为 AunSmile 想在手办之间种点花花草草, 这会让她们住的更舒服,
今天 AunSmile 又买了 w 个手办(0 <= w <= 5000), 买的时候没有考虑过放得下放不下, 脑子里只想着买买买,
不过现在既然已经买完了, 就应该考虑下, 他的架子能不能放得下了.
input
第一行三个正整数 z, x, w.
第二行 x 个整数表示手办的位置, 如样例中，x=2, 分别在货架的 0 号格和 4号格 。
output
能的话输出true, 不能的话输出false.
Sample Input
5 2 1
0 4
Sample Output
true
*/
#include<stdio.h>
#include<stdlib.h>
int really(int how,int one,int two, int put_one, int put_two);
int main(void)
{
    int z,x,w;//格子数，第一次手办，第二次手办
    int put1,put2;

    scanf("%d %d %d",&z,&x,&w);
    scanf("%d %d",&put1,&put2);
    //第一次摆放结尾货架  (2*w)-1+put1
    //占用空位(2*w)+put1
    while(put2<=((x*2)-1+put1))
    {
        printf("你的第二次手办摆放位置过于靠前，请重新输入.");
        scanf("%d",&put2);
    }
    if(really(z,x,w,put1,put2))
        printf("ture\n");
    else
        printf("flase\n");
    
    system("pause");
    return 0;
}
int really(int how,int one, int two, int put_one, int put_two)//判断是否能放下
{
    int all;

    all=((2*one)+put_one)+(two*2-1)+(put_two-(2*one-1)-1);
    if(all<=(how+1))
        return 1;
    else
        return 0;
}
