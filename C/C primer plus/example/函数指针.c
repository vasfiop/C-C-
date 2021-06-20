#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LEN 81

char *s_gets(char *st, int n);
char showmenu(void);
void eatline(void);
void show(void (*fp)(char *),char *str);
void ToUpper(char *);
void ToLower(char *);
void Transpose(char *);
void Dummy(char *);

int main(void)
{
	char line[LEN];
	char copy[LEN];
	char choice;
	void (*pfun)(char *);

	puts("Enter a string (empty line to quit):");
	while(s_gets(line,LEN)!=NULL&&line[0]!='\0')
	{
		while((choice=showmenu())!='n')
		{
			switch(choice)
			{
				case 'u':
					pfun=ToUpper; //指针函数的意思在于先让指针指向函数
					break;
				case 'l':
					pfun=ToLower;
					break;
				case 't':
					pfun=Transpose;
					break;
				case 'o':
					pfun=Dummy;
					break;
			}
			strcpy(copy,line);
			show(pfun,copy);//然后在调用指针使用函数
		}
		puts("Enter a string (empty line to quit):");
	}
	puts("Bye!");

	return 0;
}
char showmenu(void)
{
	char ans;

	puts("Enter menu choice:");
	puts("u) uppercase          l) lowercase");
	puts("t) transposed case    o) original case");
	puts("n) next string");
	ans=getchar();
	ans=tolower(ans); //将所有参数（字符）全部返回小写；
	eatline(); //跳过多余的输出
	while(strchr("ulton",ans)==NULL)//查找输入是否在这几个字符里面，巧妙地使用了字符串来查找
	{
		puts("Please enter a u, l ,t, o, or n:");
		ans=tolower(getchar());
		eatline();
	}

	return ans;//返回用户输入的正确的参数
}
void eatline(void)
{
	while(getchar()!='\n')
		continue;
}
void ToUpper(char *str)
{
	while(*str)
	{
		*str=toupper(*str);
		str++;
	}

}
void ToLower(char *str)
{
	while(*str)
	{
		*str=tolower(*str);
		str++;
	}
}
void Transpose(char *str)
{
	while(*str)
	{
		if(islower(*str))
			*str=toupper(*str);
		else if(isupper(*str))
			*str=tolower(*str);
		str++;
	}
}
void Dummy(char *str)
{

}
void show(void (*fp)(char *),char *str)
{
	(*fp)(str);//第一个相当于其他函数，第二个就是字符串的地址
	puts(str);
}
char * s_gets(char *st, int n)
{
	char *ret_val;
	char *find;

	ret_val=fgets(st,n,stdin);
	if(ret_val)
	{
		find=strchr(st,'\n');
		if(find)
			*find='\0';
		else
			while(getchar()!='\n')
				continue;
	}

	return ret_val;
}
