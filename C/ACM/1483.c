/*
Description
�жϷǸ������Ƿ���3�ı���
Input
����n����ʾ������n��������������n����ÿ��ռһ�У�ÿ�������ᳬ��100λ
Output
���Y��N
Sample Input
2
11
12
Sample Output
N
Y
*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int n,a;
    int * num;

    scanf("%d",&n);
    num=(int *)malloc(sizeof(int)*n);//��������
    for(a=0;a<n;a++)
        scanf("%d",&num[a]);
    for(a=0;a<n;a++)
    {
        if(!(num[a]%3))
            printf("Y\n");
        else 
            printf("N\n");
    }
    free(num);//�ͷ�����
    //�ϵ�
    return 0;
}
