/*
Description
打印出所有"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该本身。 例如：153是一个水仙花数，因为153=1^3+5^3+3^3。 Output:
153
???
???
??? 
Input
无
Output
所有的水仙花数，从小的开始。 每行一个
*/
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a;
    int ge,shi,bai;
    
    for(a=100;a<=999;a++)
    {
        ge=a%10;
        shi=a/10%10;
        bai=a/100;
        if(pow(ge,3)+pow(shi,3)+pow(bai,3)==a)
            printf("%d\n",a);
    }
    
    return 0;
}
