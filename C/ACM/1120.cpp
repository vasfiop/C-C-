/*
Description
已知：Sn= 1＋1／2＋1／3＋…＋1／n。显然对于任意一个整数K，当n足够大的时候，Sn大于K。
现给出一个整数K（1<=k<=15），要求计算出一个最小的n；使得Sn＞K。

Input
键盘输入 k
Output
屏幕输出 n

Sample Input
1
Sample Output
2
*/
#include<iostream>
using namespace std;
int main()
{
    int k;
    double sn=0;
    unsigned long long i=1;

    cin>>k;
    for(i=1;sn<k;i++)
        sn+=1.0/i;
    cout<<i--<<endl;

    return 0;
}