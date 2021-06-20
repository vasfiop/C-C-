#include<stdio.h>
int main(void)
{
    int n[8]={1,2,3,4,5,6,7,8};
    int num=8;


    for(num=7;num>=0;num--)
    {
        printf("%d",n[num]);
    }

    return 0;
}
