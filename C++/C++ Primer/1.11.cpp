#include<iostream>
int main()
{
    int down,up;

    down=up=0;
    std::cin>>down>>up;
    while(down<=up)
    {
        std::cout<<down<<std::endl;
        down++;
    }

    return 0;
}