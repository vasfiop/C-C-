/*
Description
����һ�����źõ�9��Ԫ�ص����飬������һ����Ҫ��ԭ������Ĺ��ɽ������������С�
Input
��һ�У�ԭʼ���С� �ڶ��У���Ҫ��������֡�
Output
����������
Sample Input
1 7 8 17 23 24 59 62 101
50
Sample Output
1
7
8
17
23
24
50
59
62
101
*/
#include<stdio.h>
#define SIZE 10
int main(int argc, char const *argv[])
{
    int num[10];
    int n;
    int a,b;

    for(a=0;a<SIZE-1;a++)
        scanf("%d",&num[a]);
    scanf("%d",&n);
    for(a=0;a<SIZE-1;a++)
        if(num[a]>n)
            break;
    for(b=SIZE-1;b>=a;b--)
        num[b]=num[b-1];
    num[a]=n;
    for(a=0;a<SIZE;a++)
        printf("%d\n",num[a]);

    return 0;
}
