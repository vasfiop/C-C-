/*
1342��
Description
ʵ��public static boolean isSorted(int[] table)
�ж���������Ԫ���Ƿ��Ѿ�����������
Input
һ��������Ҫ�жϵ�����Ԫ�ء�
Output
����Ѿ��������YES
���û���������NO
Sample Input
1
2
3
4
5
6
Sample Output
YES
*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int num[1000];
    int a,b;
    int n;
    int find;

    scanf("%d",&n);
    for(a=0;a<n;a++)
        scanf("%d",&num[a]);
    
    for(a=0,find=1;a<n-1;a++)
    {
        for(b=a+1;b<n;b++)
        {
            if(num[a]>num[b])
            {
                find=0;
                break;
            }    
        }
    }
    if(find)
        printf("YES\n");
    else
        printf("NO\n");
    system("pause");
    return 0;
}
