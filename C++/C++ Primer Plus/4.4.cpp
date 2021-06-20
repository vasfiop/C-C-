#include"include"
using namespace std;
int main(void)
{
    string firstname;
    string lastname;
    string answer;

    cout<<"Enter your first name :";
    getline(cin,firstname);
    cout<<"Enter your last name :";
    getline(cin,lastname);
    answer=lastname+", "+firstname;
    cout<<"Here's the information in a single string :"+answer;

    return 0;
}