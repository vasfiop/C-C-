#include<iostream>
int main()
{
    int sum;
    int num;

    while(std::cin>>num)
        sum+=num;
    std::cout<<sum<<std::endl;

    return 0;
}