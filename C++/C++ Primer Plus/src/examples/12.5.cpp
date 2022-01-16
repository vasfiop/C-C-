#ifndef FIRST_H_INCLUDED
//使用指向对象的指针
#define FIRST_H_INCLUDED
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cstring>
using namespace std;
class String
{
	private:
		char *str;
		int len;
		static int num_strings;
		static const int CINLIM=80;
	public:
		String(const char *s);
		String();
		String(const String &);
		~String();
		int length() const {return len;}
		String &operator=(const String &);
		String &operator=(const char *);
		char &operator[](int i);
		const char &operator[](int i) const;
		friend bool operator<(const String &st1,const String &st2);
		friend bool operator>(const String &st1,const String &st2);
		friend bool operator==(const String &st1,const String &st2);
		friend ostream & operator<<(ostream &os,const String &st);
		friend istream & operator>>(istream &is,String & st);
		static int HowMany();
};
const int ArSize=10;
const int MaxLen=81;
int main(int argc, char const *argv[])
{
    String name;
    cout<<"Hi, what's your name?\n";
    cin>>name;
    cout<<name<<", please enter up to "<<ArSize<<" short saying <empty line to quit>:\n";
    String sayings[ArSize];
    char temp[MaxLen];
    int i;
    for(i=0;i<ArSize;i++)
    {
        cout<<i+1<<": ";
        cin.get(temp,MaxLen);
        while(cin&&cin.get()!='\n')
            continue;
        if(!cin||temp[0]=='\0')
            break;
        else
            sayings[i]=temp;
    }
    int total=i;
    if(total>0)
    {
        cout<<"Here are your sayings:\n";
        for(i=0;i<total;i++)
            cout<<sayings[i][0]<<": "<<sayings[i]<<endl;
        // int shortest=0;
        // int first=0;
        String *shortest=&sayings[0];
        String *first=&sayings[0];
        for(i=1;i<total;i++)
        {
            // if(sayings[i].length()<sayings[shortest].length())
            //     shortest=i;
            // if(sayings[i]<sayings[first])
            //     first=i;
            if(sayings[i].length()<shortest->length())
                shortest=&sayings[i];
            if(sayings[i]<*first)
                first=&sayings[i];
        }
        // cout<<"shortest saying:\n"<<sayings[shortest]<<endl;
        // cout<<"First alphabetically:\n"<<sayings[first]<<endl;
        // cout<<"This is program used "<<String::HowMany()<<" String objects. Bye.\n7";
        cout<<"Shortest saying:\n"<<*shortest<<endl;
        cout<<"First alphabetically:\n"<<*first<<endl;
        srand(time(0));
        int choice=rand()%total;
        String *favorite = new String(sayings[choice]);
        cout<<"My favorite saying:\n"<<*favorite<<endl;
        delete favorite;
    }
    else
        cout<<"No input! Bye.\n";
    
    return 0;
}
int String::num_strings=0;
int String::HowMany()
{
	return num_strings;
}
String::String(const char *s)
{
	len=strlen(s);
	str=new char[len+1];
	strcpy(str,s);
	num_strings++;
}
String::String()
{
	len=4;
	str=new char[1];
	str[0]='\0';
	num_strings++;
}
String::String(const String &st)
{
	num_strings++;
	len=st.len;
	str=new char[len+1];
	strcpy(str,st.str);
}
String::~String()
{
	--num_strings;
	delete [] str;
}
String & String::operator=(const String &st)
{
	if(this==&st)
		return *this;
	delete [] str;
	len=st.len;
	str= new char[len+1];
	strcpy(str,st.str);
	return *this;
}
String & String::operator=(const char*s)
{
	delete [] str;
	len=strlen(s);
	str=new char[len+1];
	strcpy(str,s);
	return *this;
}
char &String::operator[](int i)
{
	return str[i];
}
const char&String::operator[](int i) const
{
	return str[i];
}
bool operator<(const String &st1,const String &st2)
{
	return (strcmp(st1.str,st2.str)<0);
}
bool operator>(const String &str1,const String str2)
{
	return str2<str1;
}
bool operator==(const String &st1,const String &st2)
{
	return (strcmp(st1.str,st2.str)==0);
}
ostream &operator<<(ostream &os,const String &st)
{
	os<<st.str;
	return os;
}
istream & operator>>(istream &is,String &st)
{
	char temp[String::CINLIM];
	is.get(temp,String::CINLIM);
	if(is)
		st=temp;
	while (is&&is.get()!='\n')
		continue;
	return is;
}
#endif // FIRST_H_INCLUDED
