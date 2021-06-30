#include<stdio.h>
#include<stdlib.h>

typedef int *Num;
typedef int Number;

void first(Num *a);
void dec(Number *a);

int main(void)
{
    Num a;
    Number b;
    Number *q;

    a=NULL;
    b=10;
    a=&b;
    q=a;
    printf("%d\n",b);
    printf("%d\n",*a);
    printf("%d\n",*q);
    first(&a);
    if(a==NULL)
        puts("a is NULL");
    dec(q);
    if(q==NULL);
        puts("q is NULL");

    return 0;
}
void dec(Number *a)
{
    a=NULL;
}
void first(Num *a)
{
    *a=NULL;
}