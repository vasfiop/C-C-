/*
Description
���Ƕ��������������Ҫ���������֮һ��
���й����˴���ʳΪ��ת���ʳΪ����ʱ�򣬳��ε�����ͷ����ˣ���Ϊ����Ѫ������������㹻����������η֣�
���� �ﱾ�������η֡��ڳ��Ｘʮ����ľ�ʯ��ʱ��������������Ϊ��������������Ӧ����ʳ������΢��Ԫ����ϡ�
������ʯ��ʱ�����ڵ�2300 BCǰ���ڽ�³��ԥ���������й����˲ŷ�չ�����ũҵ����ʼ�Թ�ʳΪ�������������
��ʳ��Ϊ������ζƷ����ʳ�ı���ԭ����Ӧ�Ѿõ�΢��Ԫ����ϣ�ֱ�� ������������йص����ͼ����Ĳ�����Ϊ�����Ƴ�����������ͼ������������Ӧ�˶����ˡ�
�ε�Ӣ����salt�����ڼ�ȱ�����ҳ����������а���salt���У����ܴ�Сд����salt��Ҫ��
Input
�����а���salt SALT sAlt�ȵȵ�Ӣ��
Output
���а���salt������ֵ���
Sample Input
Salt is necessary
Water is not sAlt
as salT as you can make it
soy-bean sauce can be saLt
soy-bean sauce only
bean soy-bean sauce 
Sample Output
Salt is necessary
Water is not sAlt
as salT as you can make it
soy-bean sauce can be saLt
*/
#include<stdio.h>
#include<string.h>
char word[6]="salt";
int main(int argc, char const *argv[])
{
    char str[1000][1000];
    int n;
    int a,b,c;
    int find;

    scanf("%d",&n);
    fflush(stdin);
    for(a=0;a<n;a++)
    {
        gets(str[a]);
        fflush(stdin);
    }
    for(a=0;a<n;a++)
        for(b=0;b<strlen(str[a]);b++)
            if(str[a][b]=='s'||str[a][b]=='S')
            {
                for(c=1,b++,find=1;c<4;c++,b++)
                {
                    if(str[a][b]!=word[c]&&str[a][b]!=word[c]-32)
                        find=0;
                }
                b--;
                if(find)
                {
                    puts(str[a]);
                    b=strlen(str[a]);
                }
            }

    return 0;
}
