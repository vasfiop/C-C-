#include<stdio.h>

#define TWO 2
#define OW "Consistency is the last refuge of the unimagina \
tive. - Oscar Wilde\n" //反斜杠把该定义延续到下一行
#define SQUARE(X) X*X//带参宏
#define PR(X) printf("The result is %d.\n",x)
#define PSQR(X) printf("The square of "#X" is %d.\n",((x)*(X)))//创建字符串
#define PRINT_XN(n) printf("x"#n" = %d\n",x##n);//粘合剂
#define PRS(x,...) printf("Message "#x": "__VA_ARGS__);//变参宏

#define LIMIT 400
#undef LIMIT //取消已经定义的#define指令

#ifdef MAVIS
    #include<string.h> //如果已经用#define定义了MAVIS，则执行下面的指令
    #define STABLES 15
#else 
    #include<stdlib.h>//如果没有用#define定义，则执行下面的指令
    #define STABLES 5
#endif

#ifndef SIZE
    #define SIZE 100 //如果SIZE没有定义，则执行下面的指令
#endif

#if SYS==1//#if define (IBMPC)
    #include<string.h> //如果SYS==1则执行下面的语句
#elif SYS==2
    #include<string.h> //如果SYS==2则执行下面的语句
#else
    #include<string.h> //如果上述都没有的情况则执行下面的语句
#endif

#line 1000 //把当前行号重置为1000
#line 10 "cool.c" //把当前行号重置为10，把文件名重置为cool.c

#pragma c9x on //执行编译器指令

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
    printf("Evaluating SQUARE(x+2)锟斤拷");
    PR(SQUARE(x+2));

    PSQR(5);
    x1=10;
    PRINT_XN(1);
    
    return 0;
}
