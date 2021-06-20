#include "head.h"
int **_GetRandArray(int **array, int *rand_array)
{
    int startp;
    int endp;
    int postion;

    startp = 0;
    endp = ARRAY_SIZE * ARRAY_SIZE;

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        for (int j = 0; j < ARRAY_SIZE; j++)
        {
            postion = rand() % endp + startp;
            array[i][j] = rand_array[postion];
            if (postion <= ((endp + startp) / 2))
            {
                for (int a = postion; a > startp + 1; a--)
                    rand_array[a] = rand_array[a - 1];
                startp++;
            }
            else
            {
                for (int a = postion; a < endp - 1; a++)
                    rand_array[a] = rand_array[a + 1];
                endp--;
            }
        }
    }

    return array;
}