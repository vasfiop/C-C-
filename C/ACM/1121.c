/*
Description
��֪ n ������ x1,x2,��,xn���Լ�һ������ k��k��n������ n ����������ѡ k ��������ӣ��ɷֱ�õ�һϵ�еĺ͡�
���統 n=4��k��3��4 �������ֱ�Ϊ 3��7��12��19 ʱ���ɵ�ȫ������������ǵĺ�Ϊ��
3��7��12=22����3��7��19��29����7��12��19��38����3��12��19��34��
���ڣ�Ҫ����������Ϊ�������ж����֡�
����������ֻ��һ�ֵĺ�Ϊ������3��7��19��29����

Input
�������룬��ʽΪ��
n , k ��1<=n<=20��k��n��
x1,x2����,xn ��1<=xi<=5000000��
Output
��Ļ�������ʽΪ��
һ��������������������������

Sample Input
4 3
3 7 12 19
Sample Output
1
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void randss(int *num,int n);
int main(int argc, char const *argv[])
{
    int n,k;
    int *NUM;
    int *num;
    int a;
    int last;
    int sum;
    int find;
    int count=0;
    int size;
    int gps;

    scanf("%d %d",&n,&k);
    NUM=(int *)malloc(sizeof(int)*n);
    for(a=0;a<n;a++)
        scanf("%d",&NUM[a]);
   //randss(NUM,n);
    num=(int *)malloc(sizeof(int)*k);
    for(a=0;a<k;a++)
        num[a]=NUM[a];
    last=k-1;
    gps=n-1;
    size=k;

    while(size)
    {
        for(a=0,sum=0;a<k;a++)
            sum+=num[a];
        for(a=2,find=1;a<sum;a++)
            if(sum%a==0)
            {
                find=0;
                break;
            }
        if(find)
            count++;
        if(last==gps)
        {
            size--;
            last=size-1;
            gps--;
        }
        if(size==0)
            break;
        last++;
        num[size-1]=NUM[last];
    }
    printf("%d\n",count);

    return 0;
}
/*
void randss(int *num,int n)
{
    srand(time(NULL));
    int a;

    for(a=0;a<n;a++)
        num[a]=(rand()%5000000)+1;
    for(a=0;a<n;a++)
        printf("%d ",num[a]);
    printf("\n");
}
*/