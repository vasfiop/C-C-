/*
1468��
Description
ˮ�ɻ�����ָ��һ����λ��������λ�ϵ������ͣ�ǡ���������
Input
����n��ʾ���������ݵĸ�����������n��ÿ��һ������
Output
Y��N
Sample Input
4
153
111
0
1111
Sample Output
Y
N
N
N
*/
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n;
    int num;
    int find;
    int a;
    int ge,shi,bai;

    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        scanf("%d",&num);
        find=1;
        if(num<100||num>=1000)
            find=0;
        ge=num%10;
        shi=num/10%10;
        bai=num/100;
        if(pow(ge,3)+pow(shi,3)+pow(bai,3)==num&&find==1)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}
