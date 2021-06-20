#include"include"
using namespace std;
long double maybe(unsigned int numbers, unsigned int answers, unsigned int special);
int main(void)
{
    int numbers,answers,special;

    cout<<"Enter the total number of choices on the game card and\n";
    cout<<"the number of picks allowed:\n";
    while((cin>>numbers>>answers>>special)&&numbers>=answers)
    {
        cout<<"You have one chance in ";
        cout<<maybe(numbers,answers,special);
        cout<<" of winning.\n";
        cout<<"Next two numbers (q to quit): ";
    }
    cout<<"bye!"<<endl;

    return 0;
}
long double maybe(unsigned int numbers, unsigned int answers, unsigned int special)
{
    long double result=1.0;
    unsigned int first;
    unsigned i;

    for(first=numbers,i=answers;i>0;i--,first--)
        result=result*first/i;
    return result*special;
}