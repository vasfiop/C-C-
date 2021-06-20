#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include "diceroll.h"
extern int roll_count;
int roll_n_dice(int dice, int sides);
int roll_count=0;
int main(void)
{
    int sets,roll,a;
    int sides,dice;

    printf("Enter the number of sets; enter q to stop: ");
    while(scanf("%d",&sets)&&sets!='q')
    {
        printf("How many sides and how many dice?");
        scanf("%d %d",&sides,&dice);
        while(getchar()!='\n')
            continue;
        printf("Here are %d sets of %d %d-sided throws.\n",sets,dice,sides);
        for(a=0;a<sets;a++)
        {
            roll=roll_n_dice(dice,sides);
            printf("%d ",roll);
        }
        printf("\nHow many sets? Enter q to stop:");
    }
    printf("Done.\n");
    return 0;
}
static int rollem(int sides)
{
    int roll;

    roll=rand()%sides+1;
    ++roll_count;

    return roll;
}
int roll_n_dice(int dice, int sides)
{
    int d;
    int total=0;

    if(sides<2)
    {
        printf("Need at least 2 sides.\n");
        return -2;
    }
    if(dice<1)
    {
        printf("Need at least 1 die.\n");
        return -1;
    }
    for(d=0;d<dice;d++)
        total+=rollem(sides);

    return total;
}
