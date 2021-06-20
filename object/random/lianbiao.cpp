
#include <iostream>
#include <ctime>
#include <fstream>
#include <windows.h>

using namespace std;

const unsigned int RANDSIZE = 100000;
const unsigned int FORSIZE = 1000;

int main(int argc, char const *argv[])
{
    time_t start;
    time_t finish;
    time_t sum;
    int position;
    int *NUM;
    int *randnum;
    ofstream file;
    const char *FILENAME = "???????2.txt";
    int startpos;
    int finishpos;

    file.open(FILENAME);
    if (!file.is_open())
    {
        cout << "?????" << FILENAME << endl;
        // exit(EXIT_FAILURE);
    }

    NUM = new int[sizeof(int) * RANDSIZE];
    for (int i = 0; i < RANDSIZE; i++)
        NUM[i] = i + 1;

    for (int i = 0; i < FORSIZE; i++)
    {
        cout << "??" << i + 1 << "??" << endl;
        file << "??" << i + 1 << "??" << endl;

        srand(time(0));
        randnum = new int[sizeof(int) * RANDSIZE];

        cout << "??????......" << endl;
        start = GetTickCount();
        int a = 0;
        startpos = 0;
        finishpos = RANDSIZE;
        while (a < RANDSIZE)
        {
            position = rand() % finishpos + startpos;
            randnum[a] = NUM[position];
            if (position <= ((finishpos + startpos) / 2))
            {
                for (int b = position; b > startpos + 1; b--)
                    NUM[b] = NUM[b - 1];
                startpos++;
            }
            else
            {
                for (int b = position; b < finishpos - 1; b++)
                    NUM[b] = NUM[b + 1];
                finishpos--;
            }
            a++;
        }
        finish = GetTickCount();
        cout << "???????" << endl;

        sum += (finish - start);
        cout << "???: " << finish - start << endl;
        file << "???: " << finish - start << endl;
        cout << endl;

        delete[] randnum;
    }
    cout << "??????????: " << sum << endl;
    cout << "??????????: " << (double)sum / FORSIZE << endl;

    file << "??????????: " << sum << endl;
    file << "??????????: " << (double)sum / FORSIZE << endl;

    file.close();
    delete[] NUM;

    cout << "???????????......" << endl;
    getchar();

    return 0;
}