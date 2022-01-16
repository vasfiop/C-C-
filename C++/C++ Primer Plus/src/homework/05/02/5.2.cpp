#include"include"
using namespace std;
int main(int argc, char const *argv[])
{
    const int MAX=100;
    array<long double,MAX>arr;
    arr[1]=arr[0]=1LL;
    int a;
    for(a=2;a<MAX;a++)
        arr[a]=a*arr[a-1];
    for(a=0;a<MAX;a++)
        cout<<a<<"! = "<<arr[a]<<endl;

    return 0;
}
