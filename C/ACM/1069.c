/*
Description
дһ��������ʹ������һ����ά���飨��������ת�ã������л�����
Input
һ��3x3�ľ���
Output
ת�ú�ľ���
Sample Input
1 2 3
4 5 6
7 8 9
Sample Output
1 4 7 
2 5 8 
3 6 9 
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num[3][3];
    int a,b;
    int middle;

    for(a=0;a<3;a++)
        for(b=0;b<3;b++)
            scanf("%d",&num[a][b]);
    for(a=0;a<3;a++)
        for(b=a;b<3;b++)
        {
            middle=num[a][b];
            num[a][b]=num[b][a];
            num[b][a]=middle;
        }
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
            printf("%d ",num[a][b]);
        printf("\n");
    }

    return 0;
}
