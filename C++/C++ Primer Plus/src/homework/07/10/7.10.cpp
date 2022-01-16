#include"include"
using namespace std;
inline double add(double x,double y);
inline double sub(double x,double y);
inline double calcuate(double x,double y,double (*ps)(double ,double ));
int main(int argc, char const *argv[])
{
    double x,y;

    cout<<"Enter two number: ";
    while(cin>>x>>y)
    {
        cout<<x<<" + "<<y<<" is "<<calcuate(x,y,add)<<endl;
        cout<<x<<" - "<<y<<" is "<<calcuate(x,y,sub)<<endl;
    }

    return 0;
}
inline double add(double x,double y)
{return x+y;}
inline double sub(double x,double y)
{return x-y;}
inline double calcuate(double x,double y,double (*ps)(double ,double))
{return ps(x,y);}