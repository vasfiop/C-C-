/*
Description
��һ�������У� 2/1 3/2 5/3 8/5 13/8 21/13...... ���������е�ǰN��֮�ͣ�������λС����
Input
N
Output
����ǰN���
Sample Input
10
Sample Output
16.48
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    double sum;
    double up,down;
    int n;
    int a;
    double middle;

    scanf("%d",&n);
    up=2;
    down=1;
    for(a=0,sum=0;a<n;a++)
    {
        sum+=up/down;
        middle=up;
        up=up+down;
        down=middle;
    }
    printf("%.2f\n",sum);

    return 0;
}
