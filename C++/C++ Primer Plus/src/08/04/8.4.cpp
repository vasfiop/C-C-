#include"include"
using namespace std;
struct stringy
{
    char *str;
    int ct;
};
void set(stringy & heany,char *str);
void show(const stringy & heany,int mode=1);
void show(const char * str,int mode=1);
int main(int argc, char const *argv[])
{
    stringy heany;
    char testing [] ="Really isn't what it used to be.";

    set(heany,testing);
    show(heany);
    show(heany,2);
    testing[0]='D';
    testing[1]='u';
    show(testing);
    show(testing,3);
    show("Done!");
    
    return 0;
}
void set(stringy & heany,char *str)
{
    int size = strlen(str);
    heany.str= new char (size+1);
    strcpy(heany.str,str);
    heany.ct=size;
}
void show(const stringy & heany,int mode)
{
    int i;
    for(i=0;i<mode;i++)
        cout<<heany.str<<endl;
    
}
void show(const char *str, int mode)
{
    int i;
    for(i=0;i<mode;i++)
        cout<<str<<endl;
}