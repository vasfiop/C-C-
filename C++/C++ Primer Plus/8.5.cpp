#include"include"
using namespace std;
template <typename T>
T max5(T number []);
int main(int argc, char const *argv[])
{
    int number_1 [5] = {1,2,3,4,5};
    double number_2 [5] = {1.1,2.2,3.3,4.4,5.5};
    int max_int;
    double max_double;

    max_int=max5(number_1);
    max_double=max5(number_2);
    cout<<"Max_int :"<<max_int<<endl;
    cout<<"Max_double :"<<max_double<<endl;
    
    return 0;
}
template <typename T>
T max5(T number [])
{
    T max=number[0];
    int i;

    for(i=1;i<5;i++)
        if(number[i]>max)
            max=number[i];
            
    return max;
}