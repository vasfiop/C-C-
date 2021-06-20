/*
Description
给定一个以秒为单位的时间t，要求用 “<H>:<M>:<S>”的格式来表示这个时间。
<H>表示时间，<M>表示分钟， 而<S>表示秒，它们都是整数且没有前导的“0”。例如，若t=0，则应输出是“0:0:0”；若t=3661，则输出“1:1:1”。
Input
输入只有一行，是一个整数t（0<=t<=86399）。
Output
输出只有一行，是以“<H>:<M>:<S>”的格式所表示的时间，不包括引号。
Sample Input
5436
Sample Output
1:30:36
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int h,m,s;//<H>表示时间，<M>表示分钟， 而<S>表示秒，
    int t;

    scanf("%d",&t);
    h=t/3600;
    m=t/60%60;
    s=t%60;
    printf("%d:%d:%d\n",h,m,s);

    return 0;
}
