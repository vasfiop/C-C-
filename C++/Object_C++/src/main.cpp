#include <iostream>
#include <cstring>
#include <bitset>
#include "Title.h"
using namespace std;

int main()
{
	Title title("123123123123");
	char *titleValue;
	title.GetTitle(&titleValue);
	cout << titleValue << endl;

	return 0;
}