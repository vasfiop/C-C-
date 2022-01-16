#include<iostream>
#include<string>
#include<vector>
using namespace std;
const int SIZE=50;
int main(void)
{
    //vector<char>firstname(SIZE);
    char firstname[SIZE];
    char *lastname=new char[SIZE];
    char grade;
    int age;

    cout<<"What is your first name?";
    cin.getline(firstname,SIZE);
    cout<<"What is your last name?";
    cin.getline(lastname,SIZE);
    cout<<"What letter grade do you deserve?";
    cin>>grade;
    cout<<"What is your age?";
    cin>>age;
    
    cout<<"Name:"<<lastname<<","<<firstname<<endl;
    grade=grade+1;
    cout<<"Grade:"<<grade<<endl;
    cout<<"Age:"<<age<<endl;

    return 0;
}