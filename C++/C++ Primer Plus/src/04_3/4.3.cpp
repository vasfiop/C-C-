#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    const int SIZE=50;
    char *firstname=new char[SIZE];
    char *lastname=new char[SIZE];

    cout<<"Enter your first name:";
    cin.getline(firstname,SIZE);
    cout<<"Enter your last name:";
    cin.getline(lastname,SIZE);
    cout<<"Here's the information in a single string:"<<lastname<<", "<<firstname<<endl;
    delete [] firstname;
    delete [] lastname;

    return 0;
}
