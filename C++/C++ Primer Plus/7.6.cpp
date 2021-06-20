#include"include"
using namespace std;

unsigned int Fill_array(double *array,unsigned int size);
void Show_array(double *array,unsigned int size);
void Reverse_array(double *array,unsigned int size);

int main(void)
{
    const int SIZE=10;
    unsigned int count;
    double * number = new double[SIZE];

    count=Fill_array(number,SIZE);
    cout<<count<<endl;
    Show_array(number,count);
    Reverse_array(number,count);
    Show_array(number,count);

    return 0;
}
void Reverse_array(double *array,unsigned int size)
{
    double middle;
    int first,last;

    for(first=0;first<size/2;first++)
    {
        middle=array[first];
        array[first]=array[size-first-1];
        array[size-first-1]=middle;
    }
    
}
void Show_array(double *array,unsigned int size)
{
    int i=0;

    for(i=0;i<size;i++)
        cout<<array[i]<<" ";
    cout<<endl;
}
unsigned int Fill_array(double *array,unsigned int size)
{
    int count=0;

    while(count<size&&(cin>>array[count]))
        count++;

    return  count;
}
