/*
Description
��һ������
y={ x      x<1
  | 2x-1   1<=x<10
  \ 3x-11  x>=10
дһ�γ�������x�����y
Input
һ����x
Output
һ����y
Sample Input
14
Sample Output
31
*/
#include<stdio.h>
int hanshu(int a);
int main(void)
{
    int x;
    int y;

    scanf("%d",&x);
    y=hanshu(x);
    printf("%d\n",y);

    return 0;
}
int hanshu(int a)
{
    if(a<1)
        return a;
    else if(a>=1&&a<10)
        return 2*a-1;
    else
        return 3*a-11;
}
