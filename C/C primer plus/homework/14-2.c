#include"all_file.h"
#include"s_gets.h"

struct month
{
	char long_name[20];
	char short_name[20];
	int ths;
	int days_s;
};

int alldays(struct month day[12], int *days,char *months,int  *years);
int main (void)
{
	FILE *file;
	char *names;
	struct month sus[12];
	int i;
	int days,years;
	char months[20];
	char months_name[20];

	names=(char *)malloc(sizeof(char *)*20);
	printf("please enter a name of the month(months.txt).\n");
	s_gets(names,20);
	if((file=fopen(names,"a+"))==NULL)
	{
		printf("Can't open the %s.\n",names);
		exit(EXIT_FAILURE);
	}
	for(i=0;i<12;i++)
	{
		fscanf(file,"%s",&sus[i].long_name);
		fscanf(file,"%s",&sus[i].short_name);
		fscanf(file,"%d",&sus[i].ths);
		fscanf(file,"%d",&sus[i].days_s);
	}
	for(i=0;i<12;i++)
	{
		printf("%s %s %d %d\n",sus[i].long_name,sus[i].short_name,sus[i].ths,sus[i].days_s);
	}
	printf("Please enter a name of the day,month,years\n");
	scanf("%d %s %d",&days,months_name,&years);
	printf("%d\n",alldays(sus,&days,months_name,&years));

	fclose(file);
	free(names);

	return 0;
}

int alldays(struct month day[12],int *days,char *months, int *years)
{
	int sum;
	int i;

	if(months[0]<'0'||months[0]>'9')
	{
		for(i=0,sum=0;(strcmp(day[i-1].long_name,months))==0||(strcmp(day[i-1].short_name,months))==0;i++)
		{
			sum+=day[i].days_s;
		}
	}
	else
	{
		for(i=0,sum=0;i<atol(months)-1;i++)
		{
			sum+=day[i].days_s;
		}
	}

	return sum+*days;
}

