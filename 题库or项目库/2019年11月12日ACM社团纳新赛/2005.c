/*
Description
���ִ��ɺ�ϲ�������ͣ�ÿ����һ���ͻ�Ա�գ����ִ��ɾͻ���lesleeȥ�����͡�
 ��֪�����Ƴ���A,B,C�����¿Ʒ��
 ���Ƴ�������A+B,A+C,B+C��˫���ײͣ���A+B+C�ĺ���˫���ײ͡�
 ���ִ��ɺ�leslee�������ܵ���һ��ȥ�������ײͣ��������ײͳ���һ�顣
 ���µ��ˣ����ִ��ɺ�leslee������ƶ��������ŶԷ�����������Ҳ�������͡�
�������ĸ��ײ͵ļ۸����˳�����롣
 ��С���������ƷA,B,C�ļ۸�
A,B,C��Ϊ��������
Input
3  6  5  4
Output
1 2 3
Sample Input
3  6  5  4
40 40 40 60
201 101 101 200
Sample Output
1 2 3
20 20 20
1 100 100
*/
#include<stdio.h>
int main(void)
{
    long long int one,two,three,big,middle;
    long long int a,b,c,d;
    while(scanf("%lld %lld %lld %lld",&one,&two,&three,&big)!=EOF)
    {
        middle=one;
        if(two>middle)
            middle=two;
        if(three>middle)
            middle=three;
        if(big>middle)
            middle=big;
        if(middle-one)
            a=middle-one;
        if(middle-two)
            b=middle-two;
        if(middle-)
    }
    return 0;
}
