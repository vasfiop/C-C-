/*
Description
����һ��a��һ��b ��� a+b
Input
��������ֻ��һ�� ��Ӣ����ʽ����(����/���<=10)�� 
ת���������£� 
zero 0           one 1            two 2
three 3          four 4             five 5
six 6              seven 7         eight 8
nine 9            ten 10
Output
���ֻ��һ�У�a+b�Ľ����Ӣ������ 
Sample Input
one  two
Sample Output
three
*/
#include<stdio.h>
#include<string.h>
enum number{zero,one,two,three,four,five,six,seven,eight,nine,ten};//ö������,���԰�һ��
char *str_num[]={"zero","one","two","three","four","five","six","seven","eignt","nine","ten"};
int main(int argc, char const *argv[])
{
    enum number num;
    enum number answer;
    char str_1[10],str_2[10];
    int a;

    scanf("%s",str_1);
    scanf("%s",str_2);
    answer=zero;
    for(num=zero;num<=ten;num++)
    {
        if(strcmp(str_1,str_num[num])==0)
            answer+=num;
        if(strcmp(str_2,str_num[num])==0)
            answer+=num;
    }
    puts(str_num[answer]);

    return 0;
}
