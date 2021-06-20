#include"all_file.h"
#include"s_gets.h"

struct team
{
	int numbers;//成员号
	char first_name[40];//姓名
	char last_name[40];
	int up;//上场次数
	int attack;//击中数
	int move;//走垒数
	int RBI;//打点
	double an_attack;//安打率
};

int main(void)
{
	struct team person[100];
	FILE *file;
	char *name;
	int i;
	int count;
	int number;
	int find;

	for(i=0;i<100;i++)
		person[i].numbers=0;
	printf("Please enter a name of the file(ball.txt).\n");
	name=(char *)malloc(sizeof(char *)*40);
	s_gets(name,40);
	if((file=fopen(name,"a+"))==NULL)
	{
		printf("Can't open the %s.\n",name);
		exit(EXIT_FAILURE);
	}
	for(i=0,count=0;fscanf(file,"%d",&person[i].numbers)!=EOF;i++,count++)
	{
		fscanf(file,"%s",&person[i].first_name);
		fscanf(file,"%s",&person[i].last_name);
		fscanf(file,"%d",&person[i].up);
		fscanf(file,"%d",&person[i].attack);
		fscanf(file,"%d",&person[i].move);
		fscanf(file,"%d",&person[i].RBI);
	}
	for(i=0;i<count;i++)
	{
		person[i].an_attack=(double)person[i].attack/person[i].up;
	}
	if(count)
	{
		for(i=0;i<count;i++)
		{
			printf("%d %s %s %d %d %d %d %.2f%%\n",person[i].numbers,person[i].first_name,person[i].last_name,person[i].up,
					person[i].attack,person[i].move,person[i].RBI,person[i].an_attack*100);
		}
	}
	else
	{
		printf("No people? Is to bad.\n");
	}
	printf("You can enter a number such for the people(enter q to quit)\n");
	while(scanf("%d",&number))
	{
		for(i=0,find=0;i<count;i++)
		{
			if(person[i].numbers==number)
			{
				find=1;
				printf("%d %s %s %d %d %d %d %.2f%%\n",person[i].numbers,person[i].first_name,person[i].last_name,
						person[i].up,person[i].attack,person[i].move,person[i].RBI,person[i].an_attack*100);
				break;
			}
		}
		if(find==0)
			printf("Is no person.\n");
		printf("You can enter another number such for the people(enter q to quit)\n");
	}
	printf("Bye!\n");

	return 0;
}
