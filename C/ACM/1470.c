/*
Description
9��10��30��+70��=====9��11��40��
23��59��59��+2��=====0��0��1��
Input
����n��������n�У�ÿ����4���� h��m��s��s1,h��m��s��ʾʱ���룬s1��ʾ�ӵ�����
Output
��%d:%d:%d\n���ĸ�ʽ��ʾ������������ʾ�Ӻ��ʱ��
Sample Input
2
9 10 30 70
23 59 59 2
Sample Output
9:11:40
0:0:1
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int h,m,s,s1;//h��m��s��ʾʱ���룬s1��ʾ�ӵ�����
    int s2;
    int n;
    int a;

    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        scanf("%d %d %d %d",&h,&m,&s,&s1);
        s2=s+s1;
        while(s2>=60)
        {
            s2-=60;
            m++;
            if(m>=60)
            {
                m-=60;
                s++;
            }
            if(h>=24)
                h-=24;
        }
        printf("%d:%d:%d\n",h,m,s2);
    }

    return 0;
}
