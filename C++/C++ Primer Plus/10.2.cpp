#include"include"
class Person
{
    private:
        static const int LIMIT = 25;
        string lname;
        char fname[LIMIT];
    public:
        Person();
        Person(const string &ln,const char *fn="Heyyou");
        ~Person();
        void Show() const;
        void FormalShow() const;
};
int main(int argc, char const *argv[])
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy","Sam");
    one.Show();
    one.FormalShow();
    cout<<endl;
    two.Show();
    two.FormalShow();
    cout<<endl;
    three.Show();
    three.FormalShow();
    cout<<endl;
    cout<<"Bye!"<<endl;
    
    return 0;
}
Person::Person()
{
    lname="";
    fname[0]='\0';
}
Person::Person(const string &ln,const char *fn)
{
    this->lname=ln;
    strcpy(this->fname,fn);
}
Person::~Person()
{
    
}
void Person::Show() const
{
    cout<<"your name:"<<fname<<" "<<lname<<endl;
}
void Person::FormalShow() const
{
    cout<<"your name:"<<lname<<" "<<fname<<endl;
}