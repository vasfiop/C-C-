#include"include"
using namespace std;
void strcout(const string str);
static int sum =0;
int main(int argc, char const *argv[])
{
    string str;
    char next;

    cout<<"Enter a line:"<<endl;
    getline(cin,str);
    while (str[0]!='\0')
    {
        strcout(str);
        cout<<"Enter next line (empty line to quit):"<<endl;
        getline(cin,str);
    }
    cout<<"Bye!"<<endl;
    
    return 0;
}
void strcout(const string str)
{
    int count=0;
    int i=0;
    cout<<"\""<<str<<"\" contains ";
    while (str[i])
    {
        if(isalpha(str[i]))
            count++;
        i++;
    }
    sum+=count;
    cout<<count<<" characters"<<endl;
    cout<<sum<<" characters total"<<endl;
}
