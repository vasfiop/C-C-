/*
1397：
Description
东软信息学院的老师们，每月15号发工资，但是，如果15号是周六，就14号发，如果是周日，就16号发。XXXX年XX月，几号发工资呢？
Input
输入数据有若干行，每行两个整数，表示年份和月份，以0 0 结束
Output
每行一个输出，表示本月多少号发工资？
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
    //2020年1月1日为星期三，依次为标准
    int year,month;
    int days;
    int weekend;
    int a,b;

    scanf("%d %d",&year,&month);
    while(year&&month)
    {
        days=0;
        if(year<YEAR)//判断是否在2020年的前后
        {
            for(a=year;a<YEAR;a++)//判断是否是闰月
                if(a%4==0)
                    days++;
            days+=(YEAR-year)*365;
            for(a=0;a<month;a++)//将多余的天减去
                days-=num[a];
            days+=num[month-1]-15;
            weekend=(days%7);
            if(weekend==2)//星期日
                printf("16\n");
            else if(weekend==3)//星期六
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
            if(weekend==7)//周日
                printf("16\n");
            else if(weekend==6)//周六
                printf("14\n");
            else
                printf("15\n");
        }
        scanf("%d %d",&year,&month);
    }
    system("pause");
    return 0;
}
