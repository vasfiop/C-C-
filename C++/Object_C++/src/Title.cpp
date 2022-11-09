#include <iostream>
#include <cstdlib>
#include "Title.h"
#include <cstring>

Title::Title()
{
    value = NULL;
}
Title::Title(const char *array)
{
    makeValue(array);
}

Title::~Title()
{
    if (value)
        free(value);
}
void Title::GetTitle(char **pos)
{
    (*pos) = value;
}
void Title::SetTitle(const char *array)
{
    makeValue(array);
}
void Title::makeValue(const char *array)
{
    size_t size = strlen(array);
    if (value)
    {
        free(value);
    }

    value = (char *)malloc(sizeof(char) * (size + 1));
    strcpy(value, array);
}
