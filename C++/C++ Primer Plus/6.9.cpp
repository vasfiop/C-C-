#include"include"
using namespace std;
struct GP
{
    string name;
    int money;
};

int main(int argc, char const *argv[])
{
    ifstream file;
    int count;
    int people;

    file.open("6.9.txt");
    if(!file.is_open())
    {
        cout<<"Count't open file"<<endl;
        exit(EXIT_FAILURE);
    }
    (file>>count).get();
    GP * date = new GP[count];
    for(int i=0;i<count;i++)
    {
        getline(file,date[i].name);
        (file>>date[i].money).get();
    }
    cout<<"more than 10000"<<endl;
    people=0;
    for(int i=0;i<count;i++)
    {
        if(date[i].money>10000)
        {
            cout<<date[i].name<<endl;
            cout<<date[i].money<<endl;
            people++;
            // cout<<people<<endl;
        }
    }
    if(people==0)
    {
        cout<<"none"<<endl;
    }
    cout<<endl;
    cout<<"not more than 10000"<<endl;
    people=0;
    for(int i=0;i<count;i++)
    {
        if(date[i].money<10000)
        {
            cout<<date[i].name<<endl;
            cout<<date[i].money<<endl;
            people++;
        }
    }
    if(!people)
        cout<<"none"<<endl;
    system("pause");

    return 0;
}
