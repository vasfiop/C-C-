#include <resource.h>
#include <windows.h>
#include <ctime>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	srand(time(NULL));
	FileInit(BUILD_FILE_NAME);
	FileInit(ANSWER_FILE_NAME);
	FileInit(CHECKER_FILE_NAME);
	time_t start_time;
	time_t finish_time;

	std::cout << "正在生成" << MAXNUM << "道数独题" << std::endl;
	start_time = time(NULL);
	for (int i = 0; i < MAXNUM; i++)
	{
		randomFirstRow(checker_board[0]);
		Digit(1, 0);
		FileInput(BUILD_FILE_NAME, i + 1);
		BuildCheckerBoard();
		FileInput(CHECKER_FILE_NAME, i + 1);
	}
	finish_time = time(NULL);

	std::cout << "生成完毕,已生成日志" << BUILD_FILE_NAME << "和" << CHECKER_FILE_NAME << std::endl;
	std::cout << "共耗费" << (finish_time - start_time) << "毫秒" << std::endl;

	std::cout << "正在计算" << MAXNUM << "道数独题" << std::endl;
	start_time = time(NULL);
	std::ifstream file;
	file.open(CHECKER_FILE_NAME, std::ios::in);

	for (int i = 0; i < MAXNUM; i++)
	{
		Get_Checker_By_File(file);
		int x, y;
		x = y = 0;
		Get_Checker_Zero(&x, &y);
		Answer_Checker(x, y);
		FileInput(ANSWER_FILE_NAME, i + 1);
	}

	file.close();
	finish_time = time(NULL);

	std::cout << "计算完毕，已生成日志" << ANSWER_FILE_NAME << std::endl;
	std::cout << "共耗费" << (finish_time - start_time) << "毫秒" << std::endl;

	system("pause");

	return 0;
}