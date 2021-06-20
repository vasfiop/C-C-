#include"include"
using namespace std;
int main(int argc, char const *argv[])
{
    char ch;
    bool exit;

    cout<<"Please enter one of the following choices: "<<endl;
    cout.flags(ios::left);
    cout<<"c) carnivore p) pianist"<<endl;
    cout<<"t) tree g) game"<<endl;
    exit=false;
    
    while(!exit&&cin>>ch)
    {
        switch (ch)
        {
            case 'c':
                cout<<"This is c."<<endl;
                exit=true;
                break;
            case 'p':
                cout<<"This is p."<<endl;
                exit=true;
                break;
            case 't':
                cout<<"This is t."<<endl;
                exit=true;
                break;
            case 'g':
                cout<<"This is g."<<endl;
                exit=true;
                break;
            default:
                cout<<"Please enter a c,p,t, or g:";
                break;
        }
    }
    cout<<"program is stop"<<endl;
    
    return 0;
}
