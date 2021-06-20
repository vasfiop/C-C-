#include<stdio.h>
int main(void)
{
    float glass;

    printf("请输入杯数:\n");
    scanf("%f",&glass);
    printf("品脱=%f 杯数=%f 盎司=%f 大汤勺=%f 茶勺=%f", glass/2, glass, glass*8, glass*16, glass*48);

    return 0;
}
