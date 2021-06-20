/*
Description
现在的年轻人在描述个人信息的时候都会把所属星座也表示出来，实际上星座是来源于西方的占星学，黄道12星座是宇宙方位的代名词。该学说认为，一个人出生时，各星体落入黄道上的位置，说明了一个人的先天性格及天赋。黄道12星座象征心理层面，反映出一个人行为的表现的方式。于是将黄道分成12个星座，称为黄道12星座。依次为白羊座、金牛座、双子座、巨蟹座、狮子座、处女座、天秤座、天蝎座、射手座、摩羯座、水瓶座、双鱼座。
一个人出生日期不同，就会处于不同的星座，星座与出生日期之间的对应关系如下：
白羊座：3月21日——4月19日
金牛座：4月20日——5月20日
双子座：5月21日——6月21日
巨蟹座：6月22日——7月22日
狮子座：7月23日——8月22日
处女座：8月23日——9月22日
天秤座：9月23日——10月23日
天蝎座：10月24日——11月22日
射手座：11月23日——12月21日
摩羯座：12月22日——1月19日
水瓶座：1月20日——2月18日
双鱼座：2月19日——3月20日
老师的年纪大了，对于星座知识并不了解，请你帮助各位老师判断他（她）属于哪个星座。
Input
第一行是一个正整数n，表示后续有n行数据。后面的n行中，每一行都有三个整数，中间用一个空格分开，表示一个老师的出生日期，三个部分分别是老师出生日期的年、月、日。
Output
每个老师所属的星座，如果日期是不合法的，则输出雅典娜。
Sample Input
4
1976 11 26
1978 10 3
1979 3 14
1980 4 31
Sample Output
射手座
天秤座
双鱼座
雅典娜
*/
#include<stdio.h>
int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
char star[13][10]={"雅典娜","白羊座","金牛座","双子座","巨蟹座","狮子座",
"处女座","天秤座","天蝎座","射手座","摩羯座","水瓶座","双鱼座"};
int main(void)
{
	int n;
	int year,month,day;
	int a;
	float guess;

	scanf("%d",&n);
	for(a=0;a<n;a++)
	{
		scanf("%d %d %d",&year,&month,&day);
		guess=month+(float)day/100;
		if(year%4==0)
			months[3]=29;
		else
			months[3]=28;
		if(months[month-1]<day)
			printf("%s\n",star[0]);
		else
		{
			if(guess>=3.21&&guess<=4.19)
				printf("%s\n",star[1]);
			else if(guess>=4.20&&guess<=5.20)
				printf("%s\n",star[2]);
			else if(guess>=5.21&&guess<=6.21)
				printf("%s\n",star[3]);
			else if(guess>=6.22&&guess<=7.22)
				printf("%s\n",star[4]);
			else if(guess>=7.23&&guess<=8.22)
				printf("%s\n",star[5]);
			else if(guess>=8.23&&guess<=9.22)
				printf("%s\n",star[6]);
			else if(guess>=9.23&&guess<=10.23)
				printf("%s\n",star[7]);
			else if(guess>=10.24&&guess<=11.22)
				printf("%s\n",star[8]);
			else if(guess>=11.23&&guess<=12.21)
				printf("%s\n",star[9]);
			else if(guess>=12.22&&guess<=1.19)
				printf("%s\n",star[10]);
			else if(guess>=1.20&&guess<=2.18)
				printf("%s\n",star[11]);
			else if(guess>=2.19&&guess<=3.20)
				printf("%s\n",star[12]);
		}
	}
}
