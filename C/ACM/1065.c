/*
Description
����10�����֣�Ȼ�����������
Input
ʮ������
Output
����������ո�ֿ�
Sample Input
1 2 3 4 5 6 7 8 9 0
Sample Output
0 9 8 7 6 5 4 3 2 1
*/
#include<stdio.h>
#define SIZE 10
int main(int argc, char const *argv[])
{
    int num[SIZE];
    int a;
    
    for(a=0;a<SIZE;a++)
        scanf("%d",&num[a]);
    for(a=SIZE-1;a>=0;a--)
        printf("%d ",num[a]);
    

    return 0;
}
