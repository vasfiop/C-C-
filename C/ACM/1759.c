/*
Description
�㷨ѵ��  ȷ��Ԫ����ĸλ��    
ʱ�����ƣ�1.0s     �ڴ����ƣ�512.0MB 
      
����һ���ַ�������д����������ַ�����Ԫ����ĸ���״γ���λ�ã����û��Ԫ����ĸ���0��Ӣ��Ԫ����ĸֻ�С�a������e������i������o������u������� 
��������:  
hello
�������: 
2 
��������:  
apple 
�������: 
1 
��������:  
pmp 
�������: 
0 
*/
#include<stdio.h>
#include<string.h>
char Yuan[6]="aeiou";
int main(int argc, char const *argv[])
{
    char str[1000];
    int a,b;
    int find;
    int size;

    gets(str);
    size=strlen(str);
    for(a=0,find=0;a<size;a++)
    {
        for(b=0;b<5;b++)
            if(str[a]==Yuan[b])
            {
                find=a+1;
                break;
            }
        if(find)
            break;
    }
    printf("%d\n",find);

    return 0;
}
