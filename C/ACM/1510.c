/*
Description
��������Ȼ����ƽ���������� 1��2��ƽ����Ϊ1��3��5��ƽ����Ϊ4
Input
ÿ����������0������x��y��x��y����unsigned int�ı�ʾ��Χ֮�ڣ������0 0������
Output
���x��y��ƽ������0 0�ǽ�����־�����ü������
Sample Input
1 2
3 5
0 0
Sample Output
1
4
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    unsigned int a,b;

    scanf("%d %d",&a,&b);
    while(a!=0&&b!=0)
    {
        printf("%d\n",(a+b)/2);
        scanf("%d %d",&a,&b);
    }
    
    return 0;
}
