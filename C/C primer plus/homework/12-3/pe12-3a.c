#include<stdio.h>
#include "pe12-3.h"
int main(void)
{
    int mode;
    int how_long;
    double use;

    printf("Enter 0 for metric mode,1 for US mode:");
    scanf("%d",&mode);
    while(mode>=0)
    {
        set_mode(&mode);
        get_info(mode,&how_long,&use);
        show_info(mode,how_long,use);
        printf("Enter 0 for metric mode, 1 for us mode:");
        scanf("%d",&mode);
    }
    printf("Done\n");

    return 0;

}
