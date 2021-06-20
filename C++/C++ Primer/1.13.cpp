#include<iostream>
int main()
{
    int sum;
    int up,down;
    
    sum=0;
    for(int count=50;count<=100;count++)
        sum+=count;
    std::cout<<sum<<std::endl;

    for(int count=10;count>=0;count--)
        std::cout<<count<<std::endl;
    std::cin>>down>>up;
    for(;down<=up;down++)
        std::cout<<down<<std::endl;

    return 0;
}