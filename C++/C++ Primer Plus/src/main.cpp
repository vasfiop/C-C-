#include <iostream>
#include "include.h"

int main(int argc, char const *argv[])
{
    using namespace std;

    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "planning time = ";
    planning.Show();
    cout << endl;

    cout << "coding time = ";
    coding.Show();
    cout << endl;

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding + fixing;
    cout << "coding + fixing = ";
    total.Show();
    cout << endl;

    Time morefixing(3, 28);
    cout << "more fixing time = ";
    morefixing.Show();
    cout << endl;

    // total = morefixing.operator+(total);
    total = morefixing+total;
    cout << "morefixing.operator+(total) = ";
    total.Show();
    cout << endl;

    return 0;
}
