/*Description
��ɸ����֮N�ڵ�������
Input
N
Output
0��N������
*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(void)
{
    int n;
    int be,ne;
    bool yes;
    
    scanf("%d",&n);
    for(be=2;be<=n;be++)
    {
        for(ne=2,yes=true;ne<be;ne++)
        {
            if(be%ne==0)
                yes=false;
        }
        if(yes)
            printf("%d\n",be);
    }
    system("pause");
    return 0;
}
