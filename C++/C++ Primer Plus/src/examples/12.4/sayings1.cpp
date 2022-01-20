#include <iostream>
#include "string1.h"

using namespace std;

const int ArSize = 10;
const int MaxLen = 81;
int main()
{
    string::String name;
    cout << "H1, what's your name?\n";
    cin >> name;

    cout << name << ", please enter up tp " << ArSize << " short sayings <empty line to quit>:\n";
    string::String sayings[ArSize];
    char temp[MaxLen];

    int i;

    for (i = 0; i < ArSize; i++)
    {
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0')
            break;
        else
            sayings[i] = temp;
    }
    int total = i;
    if (total > 0)
    {
        cout << "Here are you sayings:\n";
        for (i = 0; i < total; i++)
            cout << sayings[i][0] << ": " << sayings[i] << endl;
        int shortest = 0;
        int first = 0;
        for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < sayings[shortest].length())
                shortest = i;
            if (sayings[i] < sayings[first])
                first = i;
        }
        cout << "Shortest saying:\n"
             << sayings[shortest] << endl;
        cout << "First alphabetically:\n"
             << sayings[first] << endl;
        cout << "This programe used " << string::String::HowMany() << " String object. Bye.\n";
    }
    else
        cout << "No input! Bye.\n";

    return 0;
}