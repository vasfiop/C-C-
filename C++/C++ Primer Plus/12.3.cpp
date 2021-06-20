#include<iostream>
#include<cstring>

using namespace std;

class _Stock
{
    private:
        char *company;
        int shares;
        double share_val;
        double total_val;
        void set_tot() {total_val=shares*share_val;}
    public:
        _Stock();
        _Stock(const char *co,long n=0,double pr=0.0);
        ~_Stock();
        void buy(long num,double price);
        void sell(long num,double price);
        void update(double price);
        friend ostream & operator<<(ostream & os, const _Stock & st);
        const _Stock & topval(const _Stock &s) const;
};

const int STKS =4;

int main(void)
{
    _Stock stocks[STKS]=
    {
        _Stock("NanoSmart",12,20.0),
        _Stock("Boffo Objects",200,2.0),
        _Stock("Monolithic Obelisks",130,3.25),
        _Stock("Fleep Enterprises",60,6.5)
    };

    cout<<"Stock holdlings:\n";
    int st;
    for(st=0;st<STKS;st++)
        cout<<stocks[st];
    const _Stock *top=&stocks[0];
    for(st=1;st<STKS;st++)
        top=&top->topval(stocks[st]);
    cout<<"\nMost valuable holding:\n";
    cout<<*top;
    
    return 0;
}
_Stock::_Stock()
{
    int len=strlen("no name");
    company=new char[sizeof(char)*len+1];
    strcmp(company,"no name");
    company[len]='\0';

    shares=0;
    share_val=0;
    total_val=0;
}
_Stock::_Stock(const char*co,long n,double pr)
{
    int len=strlen(co);
    company=new char[len+1];
    strcpy(company,co);

    if(n<0)
    {
        cout<<"Number of shares can't be negative; "<<company<<" shares set to 0.\n";
        shares=0;
    }
    else
        shares=n;
    share_val=pr;
    set_tot();
}
_Stock::~_Stock()
{
    delete [] company;
    company=nullptr;
}
void _Stock::buy(long num,double price)
{
    if(num<0)
        cout<<"Number of shares purchased can't be negative. Transaction is aborted.\n";
    else
    {
        shares+=num;
        share_val=price;
        set_tot();
    }
}
void _Stock::sell(long num,double price)
{
    if(num<0)
        cout<<"Number of shares sold can't be negative. Transaction is aborted.\n";
    else if(num>shares)
        cout<<"You can't sell more than you have! Transaction is aborted.\n";
    else
    {
        shares-=num;
        share_val=price;
        set_tot();
    }
}
void _Stock::update(double price)
{
    share_val=price;
    set_tot();
}
ostream & operator<<(ostream & os, const _Stock & st)
{
    ios_base::fmtflags orig=os.setf(ios_base::fixed,ios_base::floatfield);
    streamsize prec=os.precision(3);
 
    os << "Company: " << st.company<< " Shares: " << st.shares << '\n';
    os << " Share Price: $" << st.share_val;
    os.precision(2);
    os << " Total Worth: $" << st.total_val << '\n';

    os.setf(orig, ios_base::floatfield);
    os.precision(prec);
 
    return os;
}
const _Stock & _Stock::topval(const _Stock &s) const
{
    if(s.total_val>total_val)
        return s;
    else
        return *this;
}
