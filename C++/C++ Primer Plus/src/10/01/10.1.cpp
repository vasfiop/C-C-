#include"include"
class Back
{
    private:
        char name[40];
        int id;
        int money;
    public:
        Back();
        Back(const char* name,const int id,const int money);
        ~Back();
        void PutOut(int PutOutMoney);
        void show() const;
};
int main(void)
{
    char name[40];
    int id;
    int money;

    cout<<"�������µ�����:";
    cin.getline(name,40);
    cout<<"�������µ��˺�:";
    (cin>>id).get();
    cout<<"�������µĴ��:";
    (cin>>money).get();
    Back date1(name,id,money);
    Back date2;
    date1.show();
    date2.show();
    cout<<"������������ȡ�Ľ��:";
    (cin>>money).get();
    date1.PutOut(money);
    date1.show();
    date2.PutOut(money);
    date2.show();

    return 0;
}
Back::Back()
{
    strcpy(name,"This is name");
    id=001;
    money=2000;
}
Back::Back(const char *name,const int id,const int money)
{
    strcpy(this->name,name);
    this->id=id;
    this->money=money;
}
Back::~Back()
{

}
void Back::PutOut(int PutOutMoney)
{
    if(PutOutMoney>money)
    {
        cout<<"��û����ô��Ǯ"<<endl;
        return;
    }
    cout<<"�ѳɹ���ȡ"<<money<<"Ԫ"<<endl;
    this->money-=PutOutMoney;
}
void Back::show() const
{
    cout<<"�������: "<<this->name<<endl;
    cout<<"�˺�: "<<this->id<<endl;
    cout<<"���: "<<this->money<<endl;
}