#include"all_file.h"
#include"s_gets.h"
//month.txt
struct month
{
	char name[20];
	int ths;
	int days;
};

int sum(struct month but[12],char *name);//���в��Ҽ���ĺ���
int main(int argc,int *argv[])
{
	FILE *file;//���ڱ��˹���������԰�ԭ�����һ�£����ļ��������︳ֵ
	char *file_name;
	struct month boss[12];
	int i=0;
	char *tths;

	printf("Please enter a name of the file for the month.\n");
	file_name=(char *)malloc(sizeof(char *)*20);
	s_gets(file_name,20);
	if((file=fopen(file_name,"a+"))==NULL)
	{
		printf("Can't open the %s.\n",file_name);
		exit(EXIT_FAILURE);
	}
    tths=(char *)malloc(sizeof(char *)*20);
    printf("Please enter a month name.\n");
    s_gets(tths,20);//��������Ҫ�ҵ��·�
	while(i<12)//�ļ���ֵ
	{
		fscanf(file,"%s",&boss[i].name);
		fscanf(file,"%d",&boss[i].ths);
		fscanf(file,"%d",&boss[i++].days);
	}
	printf("%d",sum(boss,tths));
	fclose(file);
	free(file_name);
	free(tths);

	return 0;
}

int sum(struct month but[12],char *names)
{
	int i;
	int suma;

	for(suma=0,i=0;(strcmp(but[i-1].name,names));i++)//����
	{
		suma+=but[i].days;
	}


	return suma;
}
