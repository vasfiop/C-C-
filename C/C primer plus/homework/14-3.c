#include"all_file.h"
#include"s_gets.h"
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100

struct book//�鱾�Ľṹ��
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void)
{
	struct book library[MAXBKS],middle;
	int count=0;
	int index;
	int index_1;


	printf("Please enter book tile.\n");
	printf("Press [enter] at the start of a line to stop.\n");//�����鱾�����֣�����ͨ��ѭ������
	while(count<MAXBKS&&s_gets(library[count].title,MAXTITL)!=NULL&&library[count].title[0]!='\0')
	{
		printf("Now enter the author.\n");
		s_gets(library[count].author,MAXAUTL);
		printf("Now enter the value.\n");
		scanf("%f",&library[count++].value);
		while(getchar()!='\n')
			continue;
		if(count<MAXBKS)
			printf("Enter the next title.\n");
	}
	if(count>0)
	{
		printf("Here is the list of your books:\n");//��ͨ�����
		for(index=0;index<count;index++)
			printf("%s by %s: $%0.2f\n",library[index].title,library[index].author,library[index].value);
		for(index=0;index<count;index++)//�����㷨����������۸�
		{
			for(index_1=index;index_1<count;index_1++)
			{
				if(library[index].value<library[index_1].value)
				{
					middle=library[index];
					library[index]=library[index_1];
					library[index_1]=middle;
				}
			}
		}
		printf("Here is the list of your books(value up):\n");
		for(index=0;index<count;index++)//�������������
			printf("%s by %s: $%0.2f\n",library[index].title,library[index].author,library[index].value);
	}
	else
		printf("No books? Too bad.\n");

	return 0;
}
