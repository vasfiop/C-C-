/*
Description
�ڻ���Internet�ĳ����У����ǳ�����Ҫ�ж�һ��IP�ַ����ĺϷ��ԡ� 
�Ϸ���IP����������ʽ�� 
A.B.C.D 
����A��B��C��D��Ϊλ��[0, 255]�е�������Ϊ�˼���������ǹ涨���ĸ������в�������ǰ������ڣ���001��������� 
���ڣ��������������жϳ����^_^
Input
�����ɶ�����ɣ�ÿ����һ���ַ����������ɡ�End of file�������� 
�ַ����������Ϊ30���Ҳ����ո�Ͳ��ɼ��ַ�
Output
����ÿһ�����룬�������һ�� 
������ַ����ǺϷ���IP�����Y���������N
Sample Input
1.2.3.4
a.b.c.d
267.43.64.12
12.34.56.bb
210.43.64.129
-123.4.5.6
Sample Output
Y
N
N
N
Y
N
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,d;

    while(scanf("%d.%d.%d.%d",&a,&b,&c,&d)!=EOF)
    {
        fflush(stdin);
        if((a>=0&&a<=255)&&(b>=0&&b<=255)&&(c>=0&&c<=255)&&(d>=0&&d<=255))
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}
