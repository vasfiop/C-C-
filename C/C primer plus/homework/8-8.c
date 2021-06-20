#include<stdio.h>
float get_num(int n);
char get_choice(void);
int main(void)
{
    char choice;
    float first_num,last_num;

    while((choice=get_choice())!='q')
    {
        first_num=get_num(1);
        last_num=get_num(2);
        switch(choice)
        {
            case 'a':
                printf("%.2f+%.2f=%.2f\n",first_num,last_num,first_num+last_num);
                break;
            case 's':
                printf("%.2f-%.2f=%.2f\n",first_num,last_num,first_num-last_num);
                break;
            case 'm':
                printf("%.2f*%.2f=%.2f\n",first_num,last_num,first_num*last_num);
                break;
            case 'd':
                printf("%.2f/%.2f=%.2f\n",first_num,last_num,first_num/last_num);
                break;
            default:
                printf("Program error!\n");
                break;
        }
    }
    printf("Bye.\n");

    return 0;
}
float get_num(int n)
{
    float fl;
    char ch;

    if(n==1)
        printf("Enter first number:");
    else
        printf("Enter second number:");
    while(scanf("%f",&fl)==0)
    {
        while((ch=getchar())!='\n')
            putchar(ch);
        printf(" is not an number.\n");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3:");
    }

    return fl;
}
char get_choice(void)
{
    char ch;

    printf("Enter the operation of your choice:\n");
    printf("a.add               s.subtract\n");
    printf("m.multiply          d.divide\n");
    printf("q.quit\n");
    while((ch=getchar())=='\n')
        continue;
    while(ch!='a'&&ch!='s'&&ch!='m'&&ch!='d'&&ch!='q')
    {
        printf("Please enter a, s, m, d, or q.\n");
        ch=getchar();
        ch=getchar();
    }

    return ch;
}
