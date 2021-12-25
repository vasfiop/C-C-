#include"include"
using namespace std;
struct CandyBar
{
    char name[20];
    double heavy;
    int hot;
};
void M_input(struct CandyBar &candybar,const char *name, const double heavy,const int hot);
void M_printf(const struct CandyBar &candybar);
int main(int argc, char const *argv[])
{
    char name[20];
    double heavy;
    int hot;
    CandyBar candybar={"Millennium Munch",2.85,350};

    cout<<"Please enter CandyBar's name: ";
    cin.getline(name,20);
    cout<<"Please enter CandyBar's heavy: ";
    (cin>>heavy).get();
    cout<<"Please enter CandyBar's hot: ";
    (cin>>hot).get();
    M_input(candybar,name,heavy,hot);
    M_printf(candybar);

    return 0;
}
void M_input(struct CandyBar &candybar,const char *name, const double heavy,const int hot)
{
    strcpy(candybar.name,name);
    candybar.heavy=heavy;
    candybar.hot=hot;
}
void M_printf(const struct CandyBar &candybar)
{
    cout<<"CandyBar's name: "<<candybar.name<<endl;
    cout<<"CandyBar's heavy: "<<candybar.heavy<<endl;
    cout<<"CandyBar's hot: "<<candybar.hot<<endl;
}
