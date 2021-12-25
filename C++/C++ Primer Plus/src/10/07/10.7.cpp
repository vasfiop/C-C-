#include"include"
class Plorg
{
    private:
        char name[20];
        int cl;
    public:
        Plorg();
        ~Plorg();
        Plorg(char *name);
        void changenumber(int cl);
        void show() const;
};
int main(int argc, char const *argv[])
{
    Plorg p1;
    Plorg p2("first");
    
    p2.show();
    
    p1.changenumber(1);
    p1.show();
    
    return 0;
}
void Plorg::changenumber(int cl)
{
    this->cl=cl;
}
Plorg::Plorg()
{
    strcpy(this->name,"Plorga");
}
Plorg::~Plorg()
{

}
Plorg::Plorg(char *name)
{
    strcpy(this->name,name);
    this->cl=50;
}
void Plorg::show() const
{
    cout<<"name: "<<this->name<<endl;
    cout<<"cl: "<<this->cl<<endl;
}