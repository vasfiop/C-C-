#include "all_file.h"
int main(void)
{
    int may,i,sum;
    int a[10]={0,0,0,0,0,0,0,0,0,0};
    srand((unsigned int)time(0));
    for(i=0;i<1000;i++)
    {
        may=rand()%10+1;
        switch(may)
        {
            case 1:
                a[0]++;
                break;
            case 2:
                a[1]++;
                break;
            case 3:
                a[2]++;
                break;
            case 4:
                a[3]++;
                break;
            case 5:
                a[4]++;
                break;
            case 6:
                a[5]++;
                break;
            case 7:
                a[6]++;
                break;
            case 8:
                a[7]++;
                break;
            case 9:
                a[8]++;
                break;
            case 10:
                a[9]++;
                break;
            default:
                printf("Error.\n");
        }
    }
    for(i=0,sum=0;i<10;i++)
    {
        printf("%d ",a[i]);
        sum+=a[i];
    }
    printf("sum=%d",sum);
    return 0;
}
