/*
Description
���ξ�������1��ʼ����Ȼ���������гɵ�һ�������������Ρ�
Input
�����ж������ݣ�ÿ��������һ��������N��ɡ���N������100��
Output
����ÿһ�����ݣ����һ��N�е����ξ���
�������֮�䲻Ҫ����Ŀ��С�
����������ͬһ�е�������һ���ո�ֿ���
��β��Ҫ����Ŀո�
Sample Input
5
Sample Output
1 3 6 10 15
2 5 9 14
4 8 13
7 12
11
*/
#include<stdio.h>
int main(void)
{
    int N,a,b,c,num,up1;

    while(scanf("%d",&N)!=EOF)
    {
        for(a=1,up1=1;a<=N;a++)
        {
            for(c=N-a,num=up1+=(a-1),b=1+a;c>=0;b++,c--)
            {

                printf("%d",num);
                if(c)
                    printf(" ");
                num+=b;
            }
            printf("\n");
        }
    }

    return 0;
}
