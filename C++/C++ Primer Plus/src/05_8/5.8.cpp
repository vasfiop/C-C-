#include"include"
using namespace std;
const int SIZE = 50;
int main(int argc, char const *argv[])
{
    char *arr = new char [SIZE];
    int count;

    cout<<"Enter words (to stop,type the word done):"<<endl;
    cin>>arr;
    count=0;
    while(strcmp(arr,"done"))
    {
        count++;
        cin>>arr;
    }
    cout<<"You entered a total of "<<count<<" words."<<endl;

    return 0;
}
// anteater birthday category dumpster
// envt finagle geometry done for sure