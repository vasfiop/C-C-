/*
Description
����һ���ṹ������������ꡢ�¡��գ�����������ڱ������ǵڼ��죬ע���������⡣ 
Input
������
Output
����ڼ���
Sample Input
2000 12 31
Sample Output
366
*/
#include<stdio.h>
struct date
{
    int year;
    int month;
    int day;
};
int MONTH[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main(int argc, char const *argv[])
{
    struct date dates;
    int a;
    int sum=0;

    scanf("%d %d %d",&dates.year,&dates.month,&dates.day);
    if(dates.year%4==0&&dates.month>2)
        sum++;
    for(a=0;a<dates.month-1;a++)
        sum+=MONTH[a];
    sum+=dates.day;
    printf("%d",sum);

    return 0;
}
