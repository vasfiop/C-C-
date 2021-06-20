#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10
char *s_gets(char *st,int n);
struct book//�����ṹ
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};
int main(void)
{
	struct book library[MAXBKS];//�����ṹ����
	int count=0;
	int index,filecount;
	FILE *pbooks;
	int size=sizeof(struct book);//size�Ĵ�С�ǽṹ�������С,��MAXTITL+MAXAUTL+sizeof��float��=84

	if((pbooks=fopen("book.txt","a+b"))==NULL)//��book.txt a+b���Զ����ƴ��ļ�ͬa+
	{
		fputs("Can't open book.txt file\n",stderr);
		exit(EXIT_FAILURE);
	}
	rewind(pbooks);//�ó���ص��ļ���ͷ
	//fseek(pbooks,(long)0,SEEK_SET); ͬ��
	while(count<MAXBKS&&fread(&library[count],size,1,pbooks)==1)
	//��һ���Ƕ�ȡ�����ṹ���ڶ�����д��Ĵ�Сps:��18�У���������д������ps:ֻд��һ�����������ĸ��Ƕ�ȡ���ļ�
	//�ú�������ֵ��������£��÷���ֵ���ǵ�������������������ֶ�ȡ���������ļ���β���÷���ֵ�ͻ�ȵ���������С��
	{
		if(count==0)//�����Ŀ��Ƶ�һ������ û���κ������߼�����
			puts("Current contents of book.txt:");
		printf("%s by %s:$%.2f\n",library[count].title,library[count].author,library[count].value);
		count++;
	}
	filecount==count;
	if(count==MAXBKS)//�����һ��ѭ������Ľṹ�ﵽ��MAXBKS���Ǿ���ʾ���ˣ�����ֹͣ���
	{
		fputs("The book.txt file is full.",stderr);
		exit(EXIT_SUCCESS);
	}
	puts("Please add new book titles.");
	puts("Press [Enter] at the start of a line to stop.");

	while(count<MAXBKS&&s_gets(library[count].title,MAXTITL)!=NULL&&library[count].title[0]!='\0')
	//��ѭ�������û����������
	{
		puts("Now enter the auothor.");
		s_gets(library[count].author,MAXAUTL);
		puts("Now enter the value.");
		scanf("%f",&library[count++].value);
		while(getchar()!='\n')
			continue;
		if(count<MAXBKS)//��if�����ǿ��Ƶ��û������10�����ʱ��ֹͣ�����仰
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
