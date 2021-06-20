/*
1342：
Description
实现public static boolean isSorted(int[] table)
判断整数数组元素是否已经按升序排序。
Input
一列数，需要判断的数组元素。
Output
如果已经排序输出YES
如果没有排序输出NO
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
