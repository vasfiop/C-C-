/*
Description
����һ��������5λ��������
Ҫ��
1��������Ǽ�λ��
2���ֱ����ÿһλ����
3�������������λ���֣�����ԭ��Ϊ321,Ӧ���123
Input
һ��������5λ������
Output
����
��һ�� λ��
�ڶ��� �ÿո�ֿ���ÿ�����֣�ע�����һ�����ֺ�û�пո�
������ ��������������
Sample Input
12345
Sample Output
5
1 2 3 4 5
54321
*/
#include<stdio.h>
int main(void)
{
    int num,count,a;
    int wei[5];

    scanf("%d",&num);
    for(a=0,count=0;num;a++,count++)
    {
        wei[a]=num%10;
        num/=10;
    }
    printf("%d\n",count);
    for(a=count-1;a>=0;a--)
    {
        printf("%d",wei[a]);
        if(a)
            printf(" ");
    }
    printf("\n");
    for(a=0;a<count;a++)
        printf("%d",wei[a]);

    return 0;
}
