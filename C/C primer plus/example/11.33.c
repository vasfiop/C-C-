 #include<stdio.h>
#include<stdlib.h>
#define LIM 30
char *s_gets(char *st, int n);
int main(void)
{
    char number[LIM];
    char *end;
    long value;

    puts("Enter a number (empty line to quit):");//�������λ����
    while(s_gets(number,LIM)&&number[0]!='\0')
    {
       value=strtol(number,&end,10);//��������ַ�������long���͵�ֵ
       printf("base 10 input, base 10 output: %ld, stopped at %s (%d)\n",value,end,*end);//��һ����ʮ����������ڶ���������ַ������������a��ASCII�롣
       value=strtol(number,&end,16);
       printf("base 16 input, base 10 output: %ld, stopped at %s (%d)\n",value,end,*end);//��һ����ʮ������������ڶ���ͬ�ϣ����������ʮ�����Ƶ�ʮ���ơ�
       puts("Next number:");
    }

    puts("Buy!\n");

    return 0;
}
char *s_gets(char * st,int n)//���뺯��
{
    char *ret_val;
    int i=0;

    ret_val=fgets(st,n,stdin);
    if(ret_val)
    {
        while(st[i]!='\n'&&st[i]!='\0')
            i++;
        if(st[i]=='\n')
            st[i]='\0';
        else
            while(getchar()!='\n')
                continue;
    }

    return ret_val;
}
