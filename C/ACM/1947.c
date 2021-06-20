/*
Description
水题在ACM中往往指的是非常简单的不需要算法和高等数学知识的题目，这类题目只要细心，
排除一些数据坑就可以轻松做出来，为了给广大新生一点自信，我们纳新也会出一些水题给大家。
假设有一个水槽长n(0<n<=100)宽m(0<m<=100)高h(0<h<=100),开始水槽内有一半的水，水槽上分别有一个进水管和排水管，
进水速度为v1(m^3/s）(0<v1<=50),排水速度为v2(m^3/s)(0<v1<=50),问可不可以将水槽排空呢？
如果可以输出排干净的时间(保留两位小数)，如果不行输出水槽装满的时间，如果既装不满也排不空，输出impossible!
Input
一组数据
第一行三个浮点数m,n,h
第二行两个浮点数v1,v2
字母含义见题面。
Output
如果可以输出排干净或者水槽装满的时间(保留两位小数)，如果都不行输出 impossible!
Sample Input
1 2 3
2 3
Sample Output
3.00
*/
#include<stdio.h>
int main(void)
{
	int m,n,h;
	int v1,v2;
	double time;

	scanf("%d %d %d",&m,&n,&h);
	scanf("%d %d",&v1,&v2);
	if(v1==v2)
		printf("impossible!");
	else
	{
		if(v1>v2)
			time=(m*n*h)/2*(v1-v2);
		else
			time=(m*n*h)/2*(v2-v1);
	}
	printf("%.2f",time);

	return 0;
}
