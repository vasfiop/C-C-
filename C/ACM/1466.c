/*
Description
����
Input
����n ����������n����n������ a��b
Output
���a��b�����Լ��
Sample Input
2
3 6
6 3
Sample Output
3
3
*/
#include<stdio.h>
#include<stdlib.h>//�ṩmallocԭ��
int gcd(int x,int y);
int main(int argc, char const *argv[])
{
    int *num_a,*num_b;
    int n;
    int s;//���Լ��
    int a;

    scanf("%d",&n);
    num_a=(int *)malloc(sizeof(int)*n);//��������
    num_b=(int *)malloc(sizeof(int)*n);
    for(a=0;a<n;a++)
    {
        scanf("%d %d",&num_a[a],&num_b[a]);
        s=gcd(num_a[a],num_b[a]);
        printf("%d\n",s);
    }
    free(num_a);
    free(num_b);//�ͷſռ�
    //�ϵ�λ��
    return 0;
}
int gcd(int x,int y)
{
    if(x%y==0)
        return y;
    else 
        return gcd(y,x%y);
}