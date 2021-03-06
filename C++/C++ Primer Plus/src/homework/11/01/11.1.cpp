#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "11.1.h"

using namespace std;
using namespace VECTOR;

int main(int argc, char const *argv[])
{
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0, 0);
    unsigned long steps = 0;
    double target;
    double dstep;
    fstream outfile;

    outfile.open("11.1.txt", ios::out | ios::trunc);
    if (!outfile.is_open())
    {
        std::cout << "file can not open." << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        outfile << "Target Distance: " << target << ", Step Size: " << dstep << endl; // 文件写入

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            outfile << steps << ": (x,y) = (" << step.xval() << ", " << step.yval() << ")\n"; // 文件写入
            steps++;
        }

        cout << "After " << steps << " steps, the subject has the following location:\n";
        outfile << "After " << steps << " steps, the subject has the following location:\n"; // 文件写入
        cout << result << endl;
        outfile << result << endl; // 文件写入
        result.polar_mode();
        outfile << " or\n"
                << result << endl; // 文件写入
        cout << " or\n"
             << result << endl;
        cout << "Average outward distance per step = " << result.magval() / steps << endl;
        outfile << "Average outward distance per step = " << result.magval() / steps << endl; // 文件写入
        steps = 0;
        result.reset(0, 0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    outfile.close();

    return 0;
}
