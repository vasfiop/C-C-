#include <iostream>
#include <fstream>
#include <string>
int main()
{
    using namespace std;

    string content;
    ifstream filestream("./src/04/main.cpp", ios::in);
    string line = "";
    while (!filestream.eof())
    {
        getline(filestream, line);
        content.append(line + "\n");
    }
    filestream.close();

    cout<<content;

    return 0;
}
