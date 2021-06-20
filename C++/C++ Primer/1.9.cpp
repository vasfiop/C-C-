#include<iostream>
int main()
{
    int sum=0;
    int count=50;

    while(count<=100)
    {
        sum+=count;
        ++count;
    }
    std::cout<<"Sum of 50 to 100 inclusive is "<<sum<<std::endl;

    return 0;
}