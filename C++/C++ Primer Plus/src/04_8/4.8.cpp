#include"include"
using namespace std;
struct WW
{
    string name;
    int size;
    int weight;
};
int main(void)
{
    WW * first=new WW;
    
    cin>>first->size;
    (cin>>first->weight).get();
    getline(cin,first->name);

    cout<<first->size<<endl;
    cout<<first->weight<<endl;
    cout<<first->name<<endl;

    return  0;
}