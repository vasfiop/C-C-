#include<stdio.h>//5
#define UP 100
#define DOWN 1
#define MIDDLE 50
int main(void)
{
    int guess=50;
    int big_guess,small_guess;
    big_guess=UP;
    small_guess=DOWN;
    char ch;

    printf("Pick an integer from 1 to 100.I will try to guess it.\n");
    printf("Respond with a y if my guess is right and with\n");
    printf("an n if it is wrong.\n");
    printf("Uh...is your number %d?\n",guess);
    while((ch=getchar())!='y')
    {
        if(ch!='y'&&ch!='n'&&ch!='s'&&ch!='b')
        {
            printf("please enter s, b, y or n.\n");
            continue;
        }
        if(getchar()=='\n')
        {
            printf("is it big or small.\n");
            printf("If big please enter b.\n");
            printf("If small please enter s.\n");
        }
        if((ch=getchar())!='b')
        {
            small_guess=guess;
            guess=(big_guess+guess)/2;
        }
        else
        {
            big_guess=guess;
            guess=(small_guess+guess)/2;
        }
        printf("Uh...is your number %d?\n",guess);
    }

    return 0;
}
