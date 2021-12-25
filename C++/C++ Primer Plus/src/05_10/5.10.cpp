#include"include"
using namespace std;
int main(int argc, char const *argv[])
{
    int number;
    int hang;
    int xing,dian;

    cout<<"Enter number of rows:";
    cin>>number;
    for(hang=0;hang<number;hang++)
    {
        xing=hang+1;
        dian=number-xing;
        for(int i=0;i<dian;i++)
            cout<<".";
        for(int i=0;i<xing;i++)
            cout<<"*";
        cout<<endl;
    }
    
    return 0;
}
