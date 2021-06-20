#include<stdio.h>
#define rong 3.785
#define chang 1.609
int main(void)
{
    float eour,usa;

    printf("请输入里程(单位英里)和耗油量(单位加仑):\n");
    scanf("%f %f",&eour,&usa);
    printf("欧洲=%.1f\n",usa*rong/chang*eour*100);
    printf("美国=%.1f\n",eour*chang/rong*usa);

    return 0;
}
