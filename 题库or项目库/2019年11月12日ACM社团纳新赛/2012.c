/*
Description
����������n���������밴��С�����˳�����ǰ3�����ݡ�
Input
��һ�У�һ��n�� 3<=n<=100��
 �ڶ���n����(int��Χ)
Output
һ�У����ǰ������С������ĩβ�޿ո񣩡�
Sample Input
4
5 2 1 3
Sample Output
1 2 3
*/
#include<stdio.h>
int main(void)
{
    int n=0,a;
    int ch[n];
    while(scanf("%d",&n)!=EOF)
    {
        for(a=0;a<n;a++)
            scanf("%d",&ch[a]);
        for(a=0;a<n;a++)
            printf("%d",ch[a]);
    }
    return 0;
}
