/*
1606：
Description
FJ在沙盘上写了这样一些字符串：
A1 = “A”
A2 = “ABA”
A3 = “ABACABA”
A4 = “ABACABADABACABA”
… …
你能找出其中的规律并写所有的数列AN吗？
Input
仅有一个数：N ≤ 26。
Output
请输出相应的字符串AN，以一个换行符结束。
输出中不得含有多余的空格或换行、回车符。
Sample Input
3
Sample Output
ABACABA
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int num,a,b,c;
	int *str;
	int all,gps;

	scanf("%d",&num);
	all=pow(2,num)-1;
	str=(int)malloc(sizeof(int)*(all+1));//建立数组
	for(a=0;a<31;a++)//赋初值
		str[a]=1;//先用数字代替字母
	for(a=0;a<num;a++)
	{
		if(a>0)
		{
			gps=pow(2,a+1)/2;
			str[gps-1]=a+1;
		}
		for(b=pow(2,a+1)-1,c=0;b>(pow(2,a+1)-1)/2;b--,c++)
			str[b-1]=str[c];
	}
	for(a=0;a<all;a++)
		printf("%c",str[a]+64);//+64完成数字和字母的转化
	free(str);//释放数组

	return 0;
}
