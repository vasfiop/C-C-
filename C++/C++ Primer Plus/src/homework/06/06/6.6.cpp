#include"include"
using namespace std;
struct GP
{
    string name;
    double money;
};
int main(int argc, char const *argv[])
{
    int count;
    int more_count;

    cout<<"Please enter a number of GP: ";
    cin>>count;

    GP * date=new GP[count];
    for(int i=0;i<count;i++)
    {
        cin>>date[i].name;
        (cin>>date[i].money).get();
        if(date[i].money>10000)
            more_count++;
    }
    if(more_count==count)
        cout<<"none"<<endl;
    else
    {
        for(int i=0;i<count;i++)
        {
            if(date[i].money>10000)
                cout<<date[i].name<<"    "<<date[i].money<<endl;
        }
    }

    return 0;
}

