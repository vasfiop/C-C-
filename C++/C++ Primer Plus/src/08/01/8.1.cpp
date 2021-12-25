#include"include"
using namespace std;
void M_printf(const char *str,int mode=0);
int main(int argc, char const *argv[])
{
    int mode;
    char str[20];

    cout<<"Please enter a array: ";
    cin.getline(str,20);
    M_printf(str);
    cout<<"Please enter your mode: ";
    cin>>mode;
    M_printf(str,mode);
    
    return 0;
}
void M_printf(const char *str,int mode)
{
    cout<<"mode: "<<mode<<endl;
    cout<<"string: "<<str<<endl;
    if(mode>1)
    {
        mode--;
        M_printf(str,mode);
    }
}