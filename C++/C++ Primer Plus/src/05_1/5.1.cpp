#include"include"
using namespace std;
int main(int argc, char const *argv[])
{
    int min;
    int max;
    int sum;
    int a;

    cin>>min;
    cin>>max;
    sum=0;
    for(a=min;a<=max;a++)
    {
        sum+=a;
    }
    cout<<sum<<endl;

    return 0;
}
