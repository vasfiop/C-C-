#include"include"
class golf
{
    private:
        static const int LEN = 40;
        char fullname[LEN];
        int level;
    public:
        golf(const char *name,int hc);
        golf();
        ~golf();
        void handicap(int hc);
        void show() const;
};
int main(int argc, char const *argv[])
{
    golf date1;
    golf date2("first",10);

    date1.handicap(1);

    date1.show();
    date2.show();
    
    return 0;
}
golf::golf(const char *name ,int hc)
{
    strcpy(this->fullname,name);
    this->level=hc;
}
golf::golf()
{
    char name[LEN];
    int hand;

    cout<<"Please enter a name:";
    cin.getline(name,LEN);
    cout<<"Please enter a number of level:";
    (cin>>hand).get();
    strcpy(this->fullname,name);
    this->level=hand;
}
golf::~golf()
{

}
void golf::handicap(int hc)
{
    this->level=hc;
}
void golf::show() const
{
    cout<<"Your name:"<<fullname<<endl;
    cout<<"your level:"<<level<<endl;
}

