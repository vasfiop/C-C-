#include"include"
using namespace std;
struct CandyBar
{
    string name;
    double weight;
    int number;
};
int main(void)
{
    CandyBar snack={"Mocha Munch",2.3,350};
    cout<<snack.name<<endl;
    cout<<snack.weight;
    cout<<endl;
    cout<<snack.number<<endl;

    return 0;
}