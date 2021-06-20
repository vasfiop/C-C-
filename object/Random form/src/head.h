#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <cstring>
#include <windows.h>
#include <fstream>

using namespace std;

const int ARRAY_SIZE = 10;

int *_GetRandArray(int (*array)[ARRAY_SIZE], int *rand_array);