#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10
char *s_gets(char *st,int n);
struct book//创建结构
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};
int main(void)
{
	struct book library[MAXBKS];//创建结构数组
	int count=0;
	int index,filecount;
	FILE *pbooks;
	int size=sizeof(struct book);//size的大小是结构的整体大小,由MAXTITL+MAXAUTL+sizeof（float）=84

	if((pbooks=fopen("book.txt","a+b"))==NULL)//打开book.txt a+b是以二进制打开文件同a+
	{
		fputs("Can't open book.txt file\n",stderr);
		exit(EXIT_FAILURE);
	}
	rewind(pbooks);//让程序回到文件的头
	//fseek(pbooks,(long)0,SEEK_SET); 同上
	while(count<MAXBKS&&fread(&library[count],size,1,pbooks)==1)
	//第一个是读取整个结构，第二个是写入的大小ps:第18行，第三个是写入数量ps:只写入一个数量，第四个是读取的文件
	//该函数返回值正常情况下，该返回值就是第三个参数，但如果出现读取错误或读到文件结尾，该返回值就会比第三个参数小。
	{
		if(count==0)//单纯的控制第一个标语 没有任何其他逻辑含义
			puts("Current contents of book.txt:");
		printf("%s by %s:$%.2f\n",library[count].title,library[count].author,library[count].value);
		count++;
	}
	filecount==count;
	if(count==MAXBKS)//如果第一个循环处理的结构达到了MAXBKS个那就提示满了，并且停止输出
	{
		fputs("The book.txt file is full.",stderr);
		exit(EXIT_SUCCESS);
	}
	puts("Please add new book titles.");
	puts("Press [Enter] at the start of a line to stop.");

	while(count<MAXBKS&&s_gets(library[count].title,MAXTITL)!=NULL&&library[count].title[0]!='\0')
	//该循环处理用户输入的新书
	{
		puts("Now enter the auothor.");
		s_gets(library[count].author,MAXAUTL);
		puts("Now enter the value.");
		scanf("%f",&library[count++].value);
		while(getchar()!='\n')
			continue;
		if(count<MAXBKS)//该if仅仅是控制当用户输入第10本书的时候停止输出这句话
			puts("Enter the next title.");
	}
	if(count>0)
	{
		puts("Here is the list of your books:");
		for(index=0;index<count;index++)
			printf("%s by %s:$%.2f\n",library[index].title,library[index].author,library[index].value);
		fwrite(&library[filecount],size,count-filecount,pbooks);
	}
	else
		puts("No books? Too bad.\n");
	puts("Bye.\n");
	fclose(pbooks);

	return 0;

}
char *s_gets(char *st,int n);
{
	char *ret_val;
	char *find;

	ret_val=fets(st,n,stdin);
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
