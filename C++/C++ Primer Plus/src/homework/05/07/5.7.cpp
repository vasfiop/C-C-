#include"include"
using namespace std;
struct car
{
    string name;
    int year;
};
int main(int argc, char const *argv[])
{
    int number;

    cout<<"How many cars do you wish to catalog?";
    (cin>>number).get();
    car * count = new car [number];
    int a=0;
    for(a=0;a<number;a++)
    {
        cout<<"Car #"<<a+1<<":"<<endl;
        cout<<"Please enter the make: ";
        getline(cin,count[a].name);
        cout<<"Please enter the year made: ";
        (cin>>count[a].year).get();
    }
    cout<<"Here is your collection:"<<endl;
    for(a=0;a<number;a++)
    {
        cout<<count[a].year<<" "<<count[a].name<<endl;
    }

    return 0;
}
