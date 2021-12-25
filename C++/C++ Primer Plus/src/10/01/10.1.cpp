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

    cout<<"请输入新的姓名:";
    cin.getline(name,40);
    cout<<"请输入新的账号:";
    (cin>>id).get();
    cout<<"请输入新的存款:";
    (cin>>money).get();
    Back date1(name,id,money);
    Back date2;
    date1.show();
    date2.show();
    cout<<"请输入你想提取的金额:";
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
        cout<<"你没有这么多钱"<<endl;
        return;
    }
    cout<<"已成功提取"<<money<<"元"<<endl;
    this->money-=PutOutMoney;
}
void Back::show() const
{
    cout<<"你的名字: "<<this->name<<endl;
    cout<<"账号: "<<this->id<<endl;
    cout<<"存款: "<<this->money<<endl;
}