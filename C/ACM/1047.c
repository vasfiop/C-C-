/*
Description
����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ���A������B������C������D������E����
90������ΪA 80-89��ΪB 70-79��ΪC 60-69��ΪD 60������ΪE
Input
һ������0��100����
Output
һ���ַ�����ʾ�ɼ��ȼ�
Sample Input
90
Sample Output
A
*/
#include<stdio.h>
int main(void)
{
    int num;
    char ch;

    scanf("%d",&num);
    switch(num/10)
    {
        case 10:
        case 9:
            ch='A';
            break;
        case 8:
            ch='B';
            break;
        case 7:
            ch='C';
            break;
        case 6:
            ch='D';
            break;
        default :
            ch='E';
            break;
    }
    printf("%c\n",ch);

    return 0;
}
