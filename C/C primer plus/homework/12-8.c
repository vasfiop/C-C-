#include "all_file.h"
int *make_array(int elem,int val);
void show_array(const int ar[],int n);
int main(void)
{
    int *pa;
    int size,value;
    int i;

    printf("Enter the number of elements:");
    while(scanf("%d",&size)==1&&size>0)
    {
        printf("Enter the initialization value: ");
        scanf("%d",&value);
        pa=make_array(size,value);
        if(pa)
        {
            show_array(pa,size);
            free(pa);
        }
        printf("Enter the number of elements (1< to quit): ");
    }
    printf("Done.\n");

    return 0;
}
int *make_array(int elem,int val)
{
    int *num;
    int i;

    num=(int *)malloc(elem*sizeof(int));
    for(i=0;i<elem;i++)
    {
        num[i]=val;
    }

    return num;
}
void show_array(const int ar[],int n)
{
    int i;

    for(i=1;i<=n;i++)
    {
        printf("%d ",ar[i-1]);
        if(!(i%8))
            printf("\n");
    }
    printf("\n");
}
