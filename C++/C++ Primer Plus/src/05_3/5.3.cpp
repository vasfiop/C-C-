#include"include"
using namespace std;
int main(int argc, char const *argv[])
{
    int number;
    int sum;
    int a;

    cin>>number;
    sum=0;
    while(number)
    {
        sum+=number;
        cin>>number;
    }
    cout<<sum;

    return 0;
}
