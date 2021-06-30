#include<time.h>
#include<stdlib.h>
void MyRand(int *List,int n)
{
    int a;
    
    srand(time(NULL));
    for(a=0;a<n;a++)
        List[a]=rand();
}
