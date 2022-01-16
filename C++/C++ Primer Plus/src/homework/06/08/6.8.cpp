#include"include"
using namespace std;
int main(int argc, char const *argv[])
{
    int count;
    char ch;
    ifstream file;

    file.open("6.8.txt");
    count==0;
    if(!file.is_open())
    {
        cout<<"Count't open file"<<endl;
        exit(EXIT_FAILURE);
    }
    while (file>>ch&&ch!=EOF)
    {
        count++;
    }
    cout<<count<<endl;
    file.close();
    system("pause");

    return 0;
}
