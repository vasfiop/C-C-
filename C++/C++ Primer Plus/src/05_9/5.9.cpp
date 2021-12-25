#include"include"
using namespace std;
int main(int argc, char const *argv[])
{
    string arr;
    int count;

    cout<<"Enter words (to stop,type the word done):"<<endl;
    cin>>arr;
    count=0;
    while(arr!="done")
    {
        count++;
        cin>>arr;
    }
    cout<<"You entered a total of "<<count<<" words."<<endl;
    
    return 0;
}
