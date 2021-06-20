/*
Description
编制程序，统计文本中字符$出现的次数，并将结果输出

Input
字符文本
Output
$次数

Sample Input
as$dfkjhkjkjdhf
asdfkj$lskdfj
werijweirjo$wie
Sample Output
3

*/
#include<iostream>
using namespace std;
int main()
{
    char ch;
    int count=0;

    while(ch=getchar())
    {
        if(ch=='$')   
            count++;
        if(ch==EOF)
            break;
    }    
    cout<<count<<endl;

    return 0;
}