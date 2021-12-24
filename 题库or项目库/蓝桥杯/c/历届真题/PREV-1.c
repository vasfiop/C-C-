/*
结题思路
根据题意这道题是让我们算三个数的最小公倍数
三个数的最小公倍数=前两个数的最小公倍数和第三个数进行比较
最小公倍数=双数相乘/最大公因数
最大公因数算法有欧几里得算法来提供
*/
#include<stdio.h>
int main(void)
{
	int a,b,c;
	int first,sec;
	int middle;
	int first_num;
	int all_num;

	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		first=a;
		sec=b;
		if(a>b)//先将3个数败排序
		{
			middle=a;
			a=b;
			b=middle;
		}
		if(a>c)
		{
			middle=a;
			c=a;
			c=middle;
		}
		if(b>c)
		{
			middle=b;
			b=c;
			c=middle;
		}
		middle=1;
		first=b;//必须大数模小数所以将a和b的位置换了一下
		sec=a;
		while(middle)
		{
			middle=first%sec;
			first=sec;
			sec=middle;
		}
		first_num=a*b/first;
		first=first_num;
		sec=c;
		middle=1;
		if(first_num<c)//将c和前两个数的最大公倍数进行排序，将大的给first小的给sec
		{
			first=c;
			sec=first_num;
		}
		while(middle)
		{
			middle=first%sec;
			first=sec;
			sec=middle;
		}
		all_num=first_num*c/first;
		printf("%d\n",all_num);
	}

	return 0;
}
/*优化答案
#include<stdio.h>
int main()
{
	int a,b,c,i,j,k;
	int max;

	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		max=a;
		if(max<b)
			max=b;
		if(max<c)
			max=c;
		k=max;
		i= 1;
		while(1)
		{
			j=k*i;
			if((j%a==0)&&(j%b==0)&&(j%c==0))
				break;
			i++;
		}
		printf("%d\n",j);
	}

	return 0;
}
*/
