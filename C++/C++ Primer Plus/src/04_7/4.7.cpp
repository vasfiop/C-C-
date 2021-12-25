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
    WW first;
    getline(cin,first.name);
    cin>>first.size;
    cin>>first.weight;
    cout<<first.name<<endl;
    cout<<first.size<<endl;
    cout<<first.weight<<endl;

    return 0;
}