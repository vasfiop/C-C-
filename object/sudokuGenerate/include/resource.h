#ifndef _RESOURCE_H_
#define _RESOURCE_H_ 1

#include <iostream>
#include <fstream>
#include <string>

#define MAXNUM 1000                 // 数独游戏的个数
#define SEED 20171212               // 用于随机数生成的种子
#define LINECOUNT 9                 // 棋盘大小
#define BUILD_FILE_NAME "库.txt"    // 答案的日志
#define CHECKER_FILE_NAME "题.txt"  // 生成完毕的题
#define ANSWER_FILE_NAME "结果.txt" // 结果日志
#define DIFFICULTY 40               // 难度(打洞数量，会有5%的波动)

extern int checker_board[LINECOUNT][LINECOUNT]; // 棋盘
extern int random_array[LINECOUNT];             // 随机函数数组

void Board_Init_();                            // 棋盘初始化
void Random_Array_Init();                      // 随机函数数组初始化
void MyPrint();                                // 打印棋盘
void randomFirstRow(int *a0);                  // 随机生成第一行
bool Digit(int i, int j);                      //填充数字
bool CheckNumber(int i, int j);                // 检查数字是否符合当前位置
bool CheckSudoku(int i, int j, int number);    // 检查当前这个数字是否符合数独规则
void FileInput(char *filename, int count);     // 将当前棋盘已数组的形式录入到文件中
void FileInit(char *filename);                 // 文件初始化
void BuildCheckerBoard();                      // 构建棋盘
int GetDifficultyNumber();                     // 随机出难度数量
void Get_Checker_By_File(std::ifstream &file); // 从文件读取棋盘
bool Answer_Checker(int i, int j);             // 破解
bool Get_Checker_Zero(int *i, int *j);         // 读取棋盘的0定位

#endif