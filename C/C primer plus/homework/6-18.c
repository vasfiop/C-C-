#include<stdio.h>
int main(void)
{
    int friends,weeks;
    weeks=1;
    friends=5;

    while(friends<=150)
    {
        friends-=weeks;
        friends*=2;
        printf("µÚ%dÖÜ:%d\n",weeks,friends);
        weeks++;
    }

    return 0;
}
