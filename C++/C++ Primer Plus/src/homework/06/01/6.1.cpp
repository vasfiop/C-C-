#include"include"
using namespace std;
int main(int argc, char const *argv[])
{
    char ch;

    cin.get(ch);
    while(ch!='@')
    {
        if(!isdigit(ch))
        {
            if(isupper(ch))
                ch=tolower(ch);
                // cout<<"is upper"<<endl;
            else if(islower(ch))
                ch=toupper(ch);
                // cout<<"is lower"<<endl;
            cout<<ch;
        }
        cin.get(ch);
    }
    cout<<"program is stop."<<endl;

    return 0;
}
