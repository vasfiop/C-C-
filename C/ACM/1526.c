/*
Description
���Ǿ�������һƪ�����в���ĳ���ؼ��ʣ��䱾�ʾ����ַ��������������дһ�γ����ж�һ��ָ�����ַ�������һ���ַ����г��ֵĴ�����
Input
ÿ�������ַ������м���һ���ո�ֿ���
Output
��һ���ַ����ڵڶ����ַ����г��ֵĴ�����
Sample Input
�� �Ϻ�����ˮ���Ժ���
����ˮ �Ϻ�����ˮ���Ժ���
abc abdefgadcbef
Sample Output
2
1
0
*/
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str_1[1000],str_2[1000];
    int size_1,size_2;
    int a,b;
    int count;
    int find;

    while(scanf("%s",str_1)!=EOF)
    {
        scanf("%s",str_2);
        size_1=strlen(str_1);
        size_2=strlen(str_2);
        for(a=0,count=0;a<size_2;a++)
        {
            if(str_2[a]==str_1[0])
            {
                for(b=0,find=1;b<size_1;b++,a++)
                    if(str_1[b]!=str_2[a])
                        find=0;
                if(find)
                    count++;
                a--;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
