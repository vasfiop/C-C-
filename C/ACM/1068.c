/*
Description
дһ���ж������ĺ�����������������һ������������Ƿ�����������Ϣ��
Input
һ����
Output
������������prime ����������not prime
Sample Input
97
Sample Output
prime
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int find;
    int n;
    int a;

    scanf("%d",&num);
    for(a=2,find=1;a<num;a++)
        if(num%a==0)
        {
            find=0;
            break;
        }
    if(find)
        printf("prime\n");
    else 
        printf("not prime\n");

    return 0;
}
