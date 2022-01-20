#include <iostream>
#include "stonewt.h"

void display(const Stonewt &st, int n);

int main(int argc, char const *argv[])
{
    Stonewt incognito = 275;
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);

    std::cout << "The celebrity weighed ";
    incognito.show_stn();
    std::cout << "The detective weighted ";
    wolfe.show_stn();
    std::cout << "The President weighted ";
    taft.show_lbs();
    incognito = 276.8;
    taft = 325;
    std::cout << "After dinner, the celebrity weighted ";
    incognito.show_stn();
    std::cout << "After dinner, the Pressident weighted ";
    taft.show_lbs();
    display(taft, 2);
    std::cout << "The wrestler weighted even more.\n";
    display(422, 2);
    std::cout << "No stone left unearned\n";

    return 0;
}
void display(const Stonewt &st, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Wow!";
        st.show_stn();
    }
}