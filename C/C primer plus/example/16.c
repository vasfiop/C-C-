#include<stdio.h>

#define TWO 2
#define OW "Consistency is the last refuge of the unimagina \
tive. - Oscar Wilde\n" //��б�ܰѸö�����������һ��
#define SQUARE(X) X*X//���κ�
#define PR(X) printf("The result is %d.\n",x)
#define PSQR(X) printf("The square of "#X" is %d.\n",((x)*(X)))//�����ַ���
#define PRINT_XN(n) printf("x"#n" = %d\n",x##n);//ճ�ϼ�
#define PRS(x,...) printf("Message "#x": "__VA_ARGS__);//��κ�

#define LIMIT 400
#undef LIMIT //ȡ���Ѿ������#defineָ��

#ifdef MAVIS
    #include<string.h> //����Ѿ���#define������MAVIS����ִ�������ָ��
    #define STABLES 15
#else 
    #include<stdlib.h>//���û����#define���壬��ִ�������ָ��
    #define STABLES 5
#endif

#ifndef SIZE
    #define SIZE 100 //���SIZEû�ж��壬��ִ�������ָ��
#endif

#if SYS==1//#if define (IBMPC)
    #include<string.h> //���SYS==1��ִ����������
#elif SYS==2
    #include<string.h> //���SYS==2��ִ����������
#else
    #include<string.h> //���������û�е������ִ����������
#endif

#line 1000 //�ѵ�ǰ�к�����Ϊ1000
#line 10 "cool.c" //�ѵ�ǰ�к�����Ϊ10�����ļ�������Ϊcool.c

#pragma c9x on //ִ�б�����ָ��

#define MYTYPE(X) _Generic((x).\
    int:"int",\
    float:"float",\
    dboule:"double".\
    default:"other"\
)

int main(int argc, char const *argv[])
{
    int x=TWO;
    int x1;

    printf("%d\n",TWO);
    printf(OW);

    x=5;
    printf("Evaluating SQUARE(x+2)��");
    PR(SQUARE(x+2));

    PSQR(5);
    x1=10;
    PRINT_XN(1);
    
    return 0;
}
