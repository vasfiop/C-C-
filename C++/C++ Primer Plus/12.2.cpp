#include"include"

class _String
{
    private:
        char *str;
        int len;
        static int num_strings;
        static const int CINLIM=90;
    public:
        _String();
        _String(const char*s);
        _String(const _String &st);
        ~_String();
        int length() const {return len;}
        _String & operator=(const _String&);
        _String &operator=(const char*);
        char &operator[](int i);
        const char &operator[](int i)const ;
        friend bool operator<(const _String &str1,const _String &str2);
        friend bool operator>(const _String &str1,const _String &str2);
        friend bool operator==(const _String &str1,const _String &str2);
        friend ostream & operator<<(ostream &os,const _String &st);
        friend istream & operator>>(istream &is,_String &st);
        static int HowMany();

        _String operator+(const _String &st) const;
        _String operator+(const char *st) const;
        friend _String operator+(const char *st,const _String &s);
        void Stringlow();
        void Stringup();
        int has(char a);
};

const int ARSIZE=10;
const int MAXLEN=81;

int main(int argc, char const *argv[])
{
    _String s1(" and I am a C++ student.");
    _String s2="Please enter your name: ";
    _String s3;
    cout<<s2;
    cin>>s3;

    s2="My name is "+s3;
    cout<<s2<<".\n";
    s2=s2+s1;
    s2.Stringup();
    cout<<"The string\n"<<s2<<"\ncintains "<<s2.has('A')<<" 'A' characters in it.\n";
    s1="red";
    _String rgb[3]={_String(s1),_String("green"),_String("blue")};
    cout<<"Enter the name of a primary color for mixing light: ";
    _String ans;
    bool success=false;
    while (cin>>ans)
    {
        ans.Stringlow();
        for(int i=0;i<3;i++)
            if(ans==rgb[i])
            {
                cout<<"That's right!\n";
                success=true;
                break;
            }
        if(success)
            break;
        else
            cout<<"Try again!\n";
    }
    cout<<"Bye\n";
    
    return 0;
}

int _String::num_strings=0;
int _String::HowMany()
{
    return num_strings;
}
_String::_String()
{
    len=4;
    str=new char[1];
    str[0]='\0';
    num_strings++;
}
_String::_String(const char *s)
{
    len=strlen(s);
    str=new char[sizeof(char)*len+1];
    strcpy(str,s);
    num_strings++;
}
_String::_String(const _String &st)
{
    num_strings++;
    len=st.len;
    str=new char[len+1];
    strcpy(str,st.str);
}
_String::~_String()
{
    --num_strings;
    delete [] str;
}
_String & _String::operator=(const _String& s)
{
    if(this==&s)
        return *this;
    delete [] str;
    len=s.len;
    str=new char[len+1];
    strcpy(str,s.str);

    return *this;
}
_String & _String::operator=(const char *s)
{
    delete [] str;
    len=strlen(s);
    str=new char[len+1];
    strcpy(str,s);
    return *this;
}
char & _String::operator[](int i)
{
    return str[i];
}
const char & _String::operator[](int i) const
{
    return str[i];
}
bool operator<(const _String &str1,const _String &str2)
{
    return (strcmp(str1.str,str2.str)<0);
}
bool operator>(const _String &str1,const _String &str2)
{
    return str2<str1;
}
bool operator==(const _String &str1,const _String &str2)
{
    return (strcmp(str1.str,str2.str)==0);
}
ostream & operator<<(ostream &os,const _String &st)
{
    os<<st.str;
    return os;
}
istream & operator>>(istream &is,_String &st)
{
    char temp[_String::CINLIM];
    is.get(temp,_String::CINLIM);
    if(is)
        st=temp;
    while(is&&is.get()!='\n')
        continue;
    return is;
}
_String _String::operator+(const _String &st) const
{
    int new_size=len+st.len;
    char *new_str=new char[new_size+1];
    strcpy(new_str,str);
    strcpy(new_str+new_size,st.str);
    new_str[new_size]='\0';

    return _String(new_str);
}
_String _String::operator+(const char *st) const
{
    int new_size=len+strlen(st);
    char *new_str=new char[new_size+1];
    strcpy(new_str,str);
    strcpy(new_str+new_size,st);
    new_str[new_size]='\0';

    return _String(new_str);
}
_String operator+(const char *st,const _String &s)
{
    return _String(st)+s;
}
void _String::Stringlow()
{
    for(int i=0;i<len;i++)
        str[i]=tolower(str[i]);
}
void _String::Stringup()
{
    for(int i=0;i<len;i++)
        str[i]=toupper(str[i]);
}
int _String::has(char a)
{
    int find=0;

    for(int i=0;i<len;i++)
        if(str[i]==a)
            find++;
    
    return find;
}