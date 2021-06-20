/*
Description
在基于Internet的程序中，我们常常需要判断一个IP字符串的合法性。 
合法的IP是这样的形式： 
A.B.C.D 
其中A、B、C、D均为位于[0, 255]中的整数。为了简单起见，我们规定这四个整数中不允许有前导零存在，如001这种情况。 
现在，请你来完成这个判断程序吧^_^
Input
输入由多行组成，每行是一个字符串，输入由“End of file”结束。 
字符串长度最大为30，且不含空格和不可见字符
Output
对于每一个输入，单独输出一行 
如果该字符串是合法的IP，输出Y，否则，输出N
Sample Input
1.2.3.4
a.b.c.d
267.43.64.12
12.34.56.bb
210.43.64.129
-123.4.5.6
Sample Output
Y
N
N
N
Y
N
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,d;

    while(scanf("%d.%d.%d.%d",&a,&b,&c,&d)!=EOF)
    {
        fflush(stdin);
        if((a>=0&&a<=255)&&(b>=0&&b<=255)&&(c>=0&&c<=255)&&(d>=0&&d<=255))
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}
