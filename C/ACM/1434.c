/*
1434��
Description
Polo����ܿ��գ���ѧ��ʦ������һ�����֣���������ÿ����һ�����ܹ��������ε�����ֵ�������������Ҿ�Ϊ��������С��1000������ʦҪ�󣬶���ÿһ�У�Ҫ���ж��ܲ��ܹ��������Σ�
Ҫ�ǲ��ܣ�Polo�ø�����NO���Ľ��ۣ�Ҫ���ܣ����ü�����������ε���������ܰ��Polo��
Input
�ж���������ݡ�ÿ���������������һ��N��ʾ������N���������ݣ���������N�����ݣ�ÿ����3����������ʾ�����ε�����ֵ��
Output
ÿ����ʾ����NO������������������ʱ���� �����ε��������������λС������
Sample Input
3
1 2 3
3 4 5
4 1 1
Sample Output
NO
6.00
NO
*/
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n;
    int a;
    int x,y,z;
    double squr;
    double p;

    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(x+y>z&&x-y<z)
        {
            p=(x+y+z)/2;
            squr=pow(p*(p-x)*(p-y)*(p-z),0.5);
            printf("%.2f\n",squr);
        }
        else 
            printf("NO\n");
    }

    return 0;
}
