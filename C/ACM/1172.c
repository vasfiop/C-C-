#include<stdio.h>
#include<math.h>
int main(void)
{
	int num[10];
	int min,gps;
	int middle;
	int a;

    for(a=0;a<10;a++)
		scanf("%d",&num[a]);
    min=abs(num[0]);
    for(a=1;a<10;a++)
		if(min>abs(num[a]))
		{
			min=abs(num[a]);
			gps=a;
		}
	middle=num[gps];
	num[gps]=num[9];
	num[9]=middle;
	for(a=0;a<10;a++)
		printf("%d ",num[a]);
}
