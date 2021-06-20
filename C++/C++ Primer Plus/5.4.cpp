#include"include"
using namespace std;
#define FIRST 100
int main(int argc, char const *argv[])
{
    double Daphne=100;
    double Cleo=100;
    int year=1;
    
    while (Cleo<=Daphne)
    {
        Daphne+=10;
        Cleo*=1.05;
        year++;
    }
    cout<<year<<endl;

    return 0;
}
