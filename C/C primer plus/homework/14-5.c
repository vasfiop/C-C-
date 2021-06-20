#include"all_file.h"
#include"s_gets.h"

#define CSIZE 4

struct name
{
	char first_name[40];
	char last_name[40];
};

struct student
{
	struct name person;
	float grade[3];
	float avg;
};

void get_scores(struct student ar[CSIZE],int lim);
void get_ave(struct student ar[CSIZE],int lim);
void show(struct student ar[CSIZE],int lim);

int main(void)
{
	struct student mark[CSIZE]=
	{
		{ "Flip", "Snide"},
		{ "Clare", "Voyans"},
		{ "Bingo", "Higgs"},
		{ "Fawn", "Hunter"}
	};
	float sum;
	int i,j;

	get_scores(mark,CSIZE);
	get_ave(mark,CSIZE);
	show(mark,CSIZE);
	for(i=0,sum=0;i<CSIZE;i++)
		for(j=0;j<3;j++)
			sum+=mark[i].grade[j];
	printf("The class avg is %.2f\n",sum/12);

	return 0;
}
void get_scores(struct student ar[CSIZE],int lim)
{
	int i,j;

	for(i=0;i<lim;i++)
	{
		printf("Please enter %d scores for %s %s:",3,ar[i].person.first_name,ar[i].person.last_name);
		for(j=0;j<3;j++)
		{
			while(scanf("%f",&ar[i].grade[j])!=1)
			{
				scanf("%*s");
				puts("Please use numeric input.");
			}
		}
	}
}
void get_ave(struct student ar[CSIZE],int lim)
{
	int i,j;

	for(i=0;i<lim;i++)
		ar[i].avg=0;
	for(i=0;i<lim;i++)
	{
		for(j=0;j<3;j++)
		{
			ar[i].avg+=ar[i].grade[j];
		}
		ar[i].avg/=3;
	}
}
void show(struct student ar[CSIZE],int lim)
{
	int i,j;

	for(i=0;i<CSIZE;i++)
        printf("%s %s by %.2f %.2f %.2f avg is %.2f\n",ar[i].person.first_name,ar[i].person.last_name,ar[i].grade[0],ar[i].grade[1],ar[i].grade[2],ar[i].avg);
}
