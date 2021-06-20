/*
Description
9点10分30秒+70秒=====9点11分40秒
23点59分59秒+2秒=====0点0分1秒
Input
整数n，接下来n行，每行有4个数 h、m、s、s1,h、m、s表示时分秒，s1表示加的秒数
Output
“%d:%d:%d\n”的格式显示三个整数，表示加后的时间
Sample Input
2
9 10 30 70
23 59 59 2
Sample Output
9:11:40
0:0:1
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int h,m,s,s1;//h、m、s表示时分秒，s1表示加的秒数
    int s2;
    int n;
    int a;

    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        scanf("%d %d %d %d",&h,&m,&s,&s1);
        s2=s+s1;
        while(s2>=60)
        {
            s2-=60;
            m++;
            if(m>=60)
            {
                m-=60;
                s++;
            }
            if(h>=24)
                h-=24;
        }
        printf("%d:%d:%d\n",h,m,s2);
    }

    return 0;
}
