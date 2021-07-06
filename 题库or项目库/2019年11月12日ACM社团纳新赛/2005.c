/*
Description
乐乐大仙很喜欢吃麦当劳，每到周一麦当劳会员日，乐乐大仙就会找leslee去吃麦当劳。
 已知麦当劳推出了A,B,C三种新款单品，
 并推出了三种A+B,A+C,B+C的双人套餐，和A+B+C的豪华双人套餐。
 乐乐大仙和leslee连续四周的周一都去吃麦当劳套餐，把四种套餐吃了一遍。
 到月底了，乐乐大仙和leslee互相用贫穷的眼神看着对方，并发誓再也不吃麦当劳。
现在有四个套餐的价格，随机顺序输入。
 从小到大输出单品A,B,C的价格。
A,B,C均为正整数。
Input
3  6  5  4
Output
1 2 3
Sample Input
3  6  5  4
40 40 40 60
201 101 101 200
Sample Output
1 2 3
20 20 20
1 100 100
*/
#include<stdio.h>
int main(void)
{
    long long int one,two,three,big,middle;
    long long int a,b,c,d;
    while(scanf("%lld %lld %lld %lld",&one,&two,&three,&big)!=EOF)
    {
        middle=one;
        if(two>middle)
            middle=two;
        if(three>middle)
            middle=three;
        if(big>middle)
            middle=big;
        if(middle-one)
            a=middle-one;
        if(middle-two)
            b=middle-two;
        if(middle-)
    }
    return 0;
}
