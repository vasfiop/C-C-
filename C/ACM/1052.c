/*
Description
求Sn=a+aa+aaa+…+aa…aaa（有n个a）之值，其中a是一个数字。 例如：2+22+222+2222+22222（n=5），n由键盘输入。并且已知a=2.
Input
n
Output
和
Sample Input
5
Sample Output
24690
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,n;
    int s;
    int num;
    int i,j;

    a=2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        num=a;
        for(j=0;j<i;j++)
        {
            num*=10;
            num+=a;
        }
        s+=num;
    }
    printf("%d\n",s);

    return 0;
}
