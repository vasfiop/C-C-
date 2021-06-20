#include"include"
using namespace std;
template <typename T>
T maxn(T number[],int size);
template <> const char *maxn(const char *str[],int size);
int main(int argc, char const *argv[])
{
    int number_int [6]={1,2,3,4,5,6};
    double number_double [4]={1.1,2.2,3.3,4.4};
    const char *str[5]=
    {
        "Hello world!!!!!!!!!!",
        "Hello C!",
        "Hello C++!",
        "Hello java!",
        "Hello python!"
    };
    int max_int;
    double max_double;
    const char *max_str;

    max_int=maxn(number_int,6);
    max_double=maxn(number_double,4);
    max_str=maxn(str,5);
    cout<<"max_int :"<<max_int<<endl;
    cout<<"max_double :"<<max_double<<endl;
    cout<<"max_str :"<<max_str<<endl;
    
    return 0;
}
template <typename T>
T maxn(T number[],int size)
{
    T max=number[0];
    int i;

    for(i=1;i<size;i++)
        if(number[i]>max)
            max=number[i];
    
    return max;
}
template <> const char *maxn(const char *str[],int size)
{
    int max=0;
    int i;
    for(i=1;i<5;i++)
        if(strlen(str[i])>strlen(str[max]))
            max=i;
    
    return str[max];
}
