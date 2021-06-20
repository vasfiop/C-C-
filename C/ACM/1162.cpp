/*
Description
编制程序，输入m,n(M>=n>=0)后,计算下列表达式的值并输出：

m!/n!*(m-n)!

Input
m n
Output
对应表达式的值

Sample Input
2 1
Sample Output
2
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double sum;
    int m,n;
    double mj,nj,cj;
    double answers;

    (cin>>m).get();
    (cin>>n).get();
    mj=cj=nj=1;
    for(int i=1;i<=m;i++)
        mj*=i;
    for(int i=1;i<=n;i++)
        nj*=i;
    for(int i=1;i<=m-n;i++)
        cj*=i;
    answers=mj/(nj*cj);
    cout<<answers<<endl;

    return 0;
}
