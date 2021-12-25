#include"include"
using namespace std;
struct  box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void Myout(box b1);
void Myout_2(box *b1);
int main(int argc, char const *argv[])
{
    box * b1=new box;
    strcpy(b1->maker,"xbox");
    b1->height=1;
    b1->width=2;
    b1->length=3;
    b1->volume=4;
    Myout(*b1);
    Myout_2(b1);
    
    return 0;
}
void Myout_2(box *b1)
{
    cout<<b1->maker<<endl;
    cout<<b1->height<<endl;
    cout<<b1->width<<endl;
    cout<<b1->length<<endl;
    cout<<b1->volume<<endl;

}
void Myout(box b1)
{
    cout<<b1.maker<<endl;
    cout<<b1.height<<endl;
    cout<<b1.width<<endl;
    cout<<b1.length<<endl;
    cout<<b1.volume<<endl;
}
