#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a[6][6],i,j,max,n;
    int i_gps,j_gps;

    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    max=abs(a[0][0]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(max<abs(a[i][j]))
            {
                max=abs(a[i][j]);
                i_gps=i;
                j_gps=j;
            }
        }
    printf("%d %d %d\n",max,i_gps,j_gps);
    system("pause");
    return 0;
}
