/*
1240：
Description
计算机系有４个专业团队，分别是计科、软工、网工和通信，现在系里有一笔奖金要发给４个团队，如何分配呢？当然要凭学生的就业率，就业率高的多拿，低的少拿。我们要先为各个团队以就业率由低向高排序，各个团队的奖金占总奖金的“名次和”分之“团队名次”。
例如：4个团队的就业率由低到高的顺序为
1 计科 2 软工 3 网工 4通信，
计科占1/（1+2+3+4），软工占2/（1+2+3+4），网工占3/（1+2+3+4），通信占4/（1+2+3+4）。
并列的情况怎么办呢？再例如：4个团队的就业率由低到高的顺序为
1 计科 2 软工 2 网工 4通信 （软工和网工并列第2）
计科占1/（1+2+2+4），软工占2/（1+2+2+4），网工占2/（1+2+2+4），通信占4/（1+2+2+4）。
Input
输入的数据仅有一组，第一行的小数N表示奖金总数，接下来的4行数据分别表示计科、软工、网工和通信的学生总数a和就业人数b(a>=b)
Output
你的输出为4行，每行一个小数分别表示计科、软工、网工和通信所得的奖金数量，保存小数点后2位
Sample Input
70000.00
99 66
200 190
66 44
33 22
Sample Output
10000.00
40000.00
10000.00
10000.00
*/
#include<stdio.h>
int main(void)
{
	double n;
	int a,A,b,B,c,C,d,D;
	double num[4];
	int x,y,z,r;
	double middle;
/*
	scanf("%lf",&n);
	scanf("%d %d",&a,&A);
	scanf("%d %d",&b,&B);
	scanf("%d %d",&c,&C);
	scanf("%d %d",&d,&D);
*/
	n=70000;
	a=99;A=66;
	b=200;B=190;
	c=66;C=44;
	d=33;D=22;
	num[0]=(double)A/a;
	num[1]=(double)B/b;
	num[2]=(double)C/c;
	num[3]=(double)D/d;
    for(x=0;x<4;x++)
        for(y=x;y<4;y++)
			if(num[x]>num[y])
			{
				middle=num[x];
				num[x]=num[y];
				num[y]=middle;
			}
    for(x=0,z=1,r=1;x<4;x++,z++,r++)
	{
		for(y=0;y<4;y++)
		{
			if(x==y||x<y)
				y++;
			if(num[x]==num[y])
			{
				r--;
				num[x]=r;
				break;
			}
			else
			{
				num[x]=z;
				break;
			}
		}
	}
	for(x=0;x<4;x++)
		printf("%f ",num[x]);
}
