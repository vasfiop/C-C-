#include"include"
using namespace std;
void M_printf(const string &str);
int main(int argc, char const *argv[])
{
    string str;

    cout<<"Enter a string (q to quit): ";
    getline(cin,str);
    while(str[0]!='q')
    {
        M_printf(str);
        cout<<"Enter a string (q to quit): ";
        getline(cin,str);
    }
    cout<<"Bye."<<endl;
    
    return 0;
}
void M_printf(const string &str)
{
    for(int i=0;i<str.size();i++)
        cout<<(char)toupper(str[i]);
    cout<<endl;
}