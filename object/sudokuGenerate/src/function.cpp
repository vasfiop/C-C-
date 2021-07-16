#include <resource.h>
#include <iostream>
#include <fstream>

using namespace std;

int checker_board[LINECOUNT][LINECOUNT] = {0};
int random_array[LINECOUNT] = {0};
int count = 1;

bool Get_Checker_Zero(int *i, int *j)
{
    for (; (*i) < LINECOUNT; (*i)++)
    {
        for (; (*j) < LINECOUNT; (*j)++)
            if (checker_board[*i][*j] == 0)
                return false;
        (*j) = 0;
    }

    return true;
}
bool Answer_Checker(int i, int j)
{
    if (!CheckNumber(i, j)) // ==false
        return false;
    int next_i, next_j;
    next_i = next_j = 0;
    if (Get_Checker_Zero(&next_i, &next_j))
        return true;
    while (!Answer_Checker(next_i, next_j))
    {
        if (!CheckNumber(i, j))
            return false;
    }
    return true;
}
void Get_Checker_By_File(ifstream &file)
{
    Board_Init_();

    std::string firstline;
    std::getline(file, firstline);
    for (int i = 0; i < LINECOUNT; i++)
        for (int j = 0; j < LINECOUNT; j++)
            file >> checker_board[i][j];
    file >> firstline;
}
int GetDifficultyNumber()
{
    int first_pos = DIFFICULTY * 0.95;
    int last_pos = DIFFICULTY * 1.05;

    return rand() % (last_pos - first_pos + 1) + first_pos;
}
void BuildCheckerBoard()
{
    int difficulty = GetDifficultyNumber();

    int first_pos = 0;
    int last_pos = LINECOUNT * LINECOUNT - 1;
    int rand_pos;
    for (int i = 0; i < difficulty; i++)
    {
        rand_pos = rand() % (last_pos - first_pos + 1) + first_pos;
        int x, y;
        x = rand_pos % LINECOUNT == 0 ? rand_pos / LINECOUNT - 1 : rand_pos / LINECOUNT;
        y = rand_pos % LINECOUNT == 0 ? LINECOUNT - 1 : rand_pos % LINECOUNT - 1;
        checker_board[x][y] = 0;
        if (rand_pos / 2 > (last_pos - first_pos))
            last_pos--;
        else
            first_pos++;
    }
}
void FileInit(char *filename)
{
    ofstream file;
    file.open(filename, std::ios::trunc);
    if (file.fail())
    {
        cout << "文件打开异常,不能打开" << filename << endl;
        system("pause");
        exit(EXIT_FAILURE);
    }

    file.close();
}
void FileInput(char *filename, int count)
{
    ofstream file;
    file.open(filename, std::ios::app);
    if (file.fail())
    {
        cout << "文件打开异常,不能打开" << filename << endl;
        system("pause");
        exit(EXIT_FAILURE);
    }

    file << "第" << count << "次" << endl;
    for (int i = 0; i < LINECOUNT; i++)
    {
        for (int j = 0; j < LINECOUNT; j++)
            file << checker_board[i][j] << " ";
        file << endl;
    }
    file << endl;

    file.close();
}
bool CheckSudoku(int i, int j, int number)
{
    int row = (i / 3) * 3;
    int line = (j / 3) * 3;
    for (int a = 0; a < LINECOUNT; a++)
        if (checker_board[i][a] == number || checker_board[a][j] == number)
            return false;
    for (int a = row; a < row + 3; a++)
        for (int b = line; b < line + 3; b++)
            if (checker_board[a][b] == number)
                return false;
    return true;
}
bool CheckNumber(int i, int j)
{
    int number = checker_board[i][j];
    if (!number) // == 0
    {
        number = 1;
        while (!CheckSudoku(i, j, number)) // ==false
        {
            number++;
            if (number > 9)
                return false;
        }
        checker_board[i][j] = number;
    }
    else
    {
        number++;
        checker_board[i][j] = 0;
        if (number > 9)
            return false;
        while (!CheckSudoku(i, j, number))
        {
            number++;
            if (number > 9)
                return false;
        }
        checker_board[i][j] = number;
    }

    return true;
}
bool Digit(int i, int j)
{
    if (j == 9)
    {
        j = 0;
        i++;
    }
    if (i == 9) // 递归完成
        return true;
    if (!CheckNumber(i, j)) // == false
        return false;
    while (!Digit(i, j + 1)) // == false
    {
        if (i == 0)
        {
            cout << "程序异常！" << endl;
            system("pause");
            exit(EXIT_FAILURE);
        }

        if (!CheckNumber(i, j))
            return false;
    }
    return true;
}
void Board_Init_()
{
    for (int i = 0; i < LINECOUNT; i++)
        for (int j = 0; j < LINECOUNT; j++)
            checker_board[i][j] = 0;
}
void Random_Array_Init()
{
    for (int i = 0; i < LINECOUNT; i++)
        random_array[i] = i + 1;
}
void randomFirstRow(int *a0)
{
    int first_pos = 0;
    int last_pos = LINECOUNT - 1;
    int rand_pos;

    Board_Init_();
    Random_Array_Init();

    for (int i = 0; i < LINECOUNT; i++)
    {
        rand_pos = rand() % (last_pos - first_pos + 1) + first_pos;
        a0[i] = random_array[rand_pos];
        if (rand_pos / 2 > (last_pos - first_pos))
        {
            for (int j = rand_pos; j < last_pos; j++)
                random_array[j] = random_array[j + 1];
            last_pos--;
        }
        else
        {
            for (int j = rand_pos; j > first_pos; j--)
                random_array[j] = random_array[j - 1];
            first_pos++;
        }
    }
}
void MyPrint()
{
    cout << "第" << count << "次" << endl;
    count++;
    for (int i = 0; i < LINECOUNT; i++)
    {
        for (int j = 0; j < LINECOUNT; j++)
            cout << checker_board[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}