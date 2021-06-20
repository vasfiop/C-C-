#include<stdio.h>
#include<limits.h>
char *itobs(int ,char*);
void show_bstr(const char*);
int vert_end(int num,int bits);

int main(void)
{
	char bin_str[CHAR_BIT *sizeof(int)+1];//CHAR_BIT 表示每个字节的位数

	int number;

	puts("Enter integers and see them in binary.");
	puts("Non-numeric input terminates program.");
	while(scanf("%d",&number)==1)
	{
		itobs(number,bin_str);
		printf("%d is\n",number);
		show_bstr(bin_str);
		putchar('\n');
		number=invert_end(number,4);
		printf("Inverting the last 4 bits gives\n");
		show_bstr(itobs(number,bin_str));
		putchar('\n');
	}
	puts("Bye!");

	return 0;
}
char *itobs(int n, char *ps)
{
	int i;
	const static int size = CHAR_BIT *sizeof(int);

	for(i=size-1;i>=0;i--,n>>=1)//其等于n=n>>1意思是2的1次幂
		ps[i]=(01&n)+'0';//两个数对应位数都为1是计算结果为1
	ps[size]='\0';

	return ps;
}
void show_bstr(const char *str)
{
	int i=0;

	while(str[i])
	{
        putchar(str[i]);
        if(++i%4==0&&str[i])
			putchar(' ');
	}
}
int invert_end(int num,int bits)
{
	int mask=0;
	int bitval=1;

	while(bits-->0)
	{
		mask|=bitval;
		bitval<<=1;
	}

	return num^mask;//两个数对应的位不一样是计算结果为1
}
