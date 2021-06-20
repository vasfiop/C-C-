#include<iostream>
using namespace std;
int main(void)
{
    long long world;
    long long country;
    double percentage;

    cout<<"Enter the world's population:";
    cin>>world;
    cout<<"Enter the population of the country:";
    cin>>country;
    percentage=(double)country/world;
    cout<<"The population of the conutry is "<<percentage*100<<"% of the world population."<<endl;

    return 0;
}