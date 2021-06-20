#include "head.h"
int main(int argc, char const *argv[])
{
    int *count_array = new int[sizeof(int) * ARRAY_SIZE * ARRAY_SIZE];
    // 下标表示该点的数字，成员元素表示是否抽到过

    int fraction = 0;
    int count = 0;
    int number = 0;

    srand(time(0));

    for (int i = 0; i < ARRAY_SIZE * ARRAY_SIZE; i++)
        count_array[i] = 0;

    while (count < ARRAY_SIZE * ARRAY_SIZE)
    {
        cout << "这是第" << number + 1 << "抽" << endl;
        cout << "fraction = " << fraction << endl;
        for (int i = 0; i < ARRAY_SIZE * ARRAY_SIZE; i++)
        {
            cout << count_array[i] << " ";
            if ((i + 1) % ARRAY_SIZE == 0)
                cout << endl;
        }
        cout << endl;
        cout << endl;

        int position;
        position = rand() % (ARRAY_SIZE * ARRAY_SIZE);
        number++;

        if (count_array[position] == 1) //如果该节点已经抽到了
            fraction += 10;
        else
        {
            count_array[position] = 1;
            count++;
        }

        if (fraction == 100)
        {
            int i = 0;
            while (count_array[i] == 0)
                i++;
            count_array[i] = 1;
            fraction = 0;
        }
    }
    cout << number << endl;

    return 0;
}
