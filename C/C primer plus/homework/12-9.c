#include "all_file.h"
int main(void)
{
    int a;
    char *num,size;
    char **all;

    printf("How may words do you wish to enter?");
    scanf("%d",&size);
    all=(char**)malloc(size*sizeof(char *));
    printf("Enter %d word now:\n",size);
    for(a=0;a<size;a++)
    {
        all[a]=(char *)malloc(100*sizeof(char));
        num=(char *)malloc(100*sizeof(char));
        scanf("%s",num);
        all[a]=num;
        printf("%s\n",all[a]);
        free(num);
    }
    for(a=0;a<size;a++)
        free(all[a]);

    return 0;
}
