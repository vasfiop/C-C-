#include<stdio.h>
int chline(char ch, int i, int j);
int main(void)
{
    int a,b;
    char cr;

    printf("�������ӡ���ַ�.\n");
    scanf("%c",&cr);
    printf("������ϣ����ӡ������.\n");
    scanf("%d",&a);
    printf("������ϣ����ӡ������.\n");
    scanf("%d",&b);
    chline(cr,a,b);


    return 0;
}
int chline(char ch,int i,int j)
{
    int a,b;

    for(a=0;a<=i;a++)
    {
        for(b=0;b<=j;b++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}
