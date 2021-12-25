#include"include"
using namespace std;
int main(int argc, char const *argv[])
{
    string ch;
    int yuan,fu,others;

    cout<<"ENter words (q to quit):"<<endl;
    yuan=fu=others=0;
    while (cin>>ch&&ch!="q")
    {
        if(isalpha(ch[0]))
        {
            if(ch[0]=='a'||ch[0]=='e'||ch[0]=='i'||ch[0]=='o'||ch[0]=='u')
                yuan++;
            else
                fu++;
        }
        else
            ++others;
    }
    cout<<yuan<<" words beginning with vowels"<<endl;
    cout<<fu<<" words beginning with consonants"<<endl;
    cout<<others<<" others"<<endl;

    return 0;
}
