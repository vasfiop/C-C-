/*
1397��
Description
������ϢѧԺ����ʦ�ǣ�ÿ��15�ŷ����ʣ����ǣ����15������������14�ŷ�����������գ���16�ŷ���XXXX��XX�£����ŷ������أ�
Input
���������������У�ÿ��������������ʾ��ݺ��·ݣ���0 0 ����
Output
ÿ��һ���������ʾ���¶��ٺŷ����ʣ�
Sample Input
2013 9
2014 9
2009 8
0 0
Sample Output
16
15
14
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define YEAR 2020
int num[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main(int argc, char const *argv[])
{
    //2020��1��1��Ϊ������������Ϊ��׼
    int year,month;
    int days;
    int weekend;
    int a,b;

    scanf("%d %d",&year,&month);
    while(year&&month)
    {
        days=0;
        if(year<YEAR)//�ж��Ƿ���2020���ǰ��
        {
            for(a=year;a<YEAR;a++)//�ж��Ƿ�������
                if(a%4==0)
                    days++;
            days+=(YEAR-year)*365;
            for(a=0;a<month;a++)//����������ȥ
                days-=num[a];
            days+=num[month-1]-15;
            weekend=(days%7);
            if(weekend==2)//������
                printf("16\n");
            else if(weekend==3)//������
                printf("14\n");
            else
                printf("15\n");
        }
        else
        {
            for(a=YEAR*100,b=0;a<year*100+month-1;a++,b++)
            {
                days+=num[b];
                if(b==1&&(a/100)%4==0)
                    days++;
                if(b==11)
                {
                    b=0;
                    a+=100;
                    a-=12;
                }
            }
            days+=15;
            weekend=(days%7)+2;
            if(weekend==7)//����
                printf("16\n");
            else if(weekend==6)//����
                printf("14\n");
            else
                printf("15\n");
        }
        scanf("%d %d",&year,&month);
    }
    system("pause");
    return 0;
}
