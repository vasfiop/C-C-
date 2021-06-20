#include"include"
using namespace std;
const int strsize = 50;
struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int perference;
};
const bop date[5]=
{
    {"0-0","0-1","0-2",03},
    {"1-0","1-1","1-2",13},
    {"2-0","2-1","2-2",23},
    {"3-0","3-1","3-2",33},
    {"4-0","4-1","4-2",43}
};
int main(int argc, char const *argv[])
{
    char ch;
    int i;

    cout<<"Benevolent Order of Programers Report"<<endl;
    cout<<"a. display by name      b. display by title"<<endl;
    cout<<"c. display by bopname   d. display by preference"<<endl;
    cout<<"q. quit"<<endl;

    cout<<"Enter your choice: ";
    while(cin>>ch&&ch!='q')
    {
        switch(ch)
        {
            case 'a':
                for(i=0;i<5;i++)
                    cout<<date[i].fullname<<endl;
                break;
            case 'b':
                for(i=0;i<5;i++)
                    cout<<date[i].title<<endl;
                break;
            case 'c':
                for(i=0;i<5;i++)
                    cout<<date[i].bopname<<endl;
                break;
            case 'd':
                for(i=0;i<5;i++)
                    cout<<date[i].perference<<endl;
                break;
            default:break;
        }
        cout<<"Next choice: ";
    }
    cout<<"Bye!"<<endl;

    return 0;
}
