# 数独生成程序(sudokuGenerate.cpp)

生成数独的算法思想：回溯法，递归实现深度优先搜索

* void randomFirstRow(char a0[], int n) /*随机生成第一行*/
* int Digit(char a[][COL], int i, int j)/*递归填充一个数字*/
* void createSudoku(char a[][COL])/*封装后的数独生成函数*/
* void createStartinggrid(const char a[][COL], char b[][COL], int numDigits)/*随机生成初盘*/
* int checkSudoku(const char a[][COL])/*按规则检查函数*/
* void printToFile(const char a[][COL], const char filename[])/*打印数独数组到文件*/
* void createSudokuToFile(void)/*批量生成数独初盘到文件中*/

主要变量：
* #define MAXNUM 1000   /*数独游戏个数*/ 
* #define SEED 20171212 /*用于随机数生成的种子*/ 

# 模拟学生端程序(sudokuStudentEnd.cpp)

函数简介：
* int checkSudoku(const char a[][COL])/*按规则检查函数*/ 
* void printSudoku(const char a[][COL])/*打印数独到屏幕*/ 
* void readFromFile(char a[][COL], const char filename[])/*从一个文件中读取数独*/
* int Solve(const char a[][COL],char b[][COL], int i, int j)/*递归解决数独*/
* void solveSudoku(const char a[][COL], char b[][COL])/*封装后的解数独函数*/
* 主函数负责遍历读取sudoku目录中的全部数独初盘，调用解数独函数，并计算时间，检查解的正确性，如果出错立刻输出错误* 提示并结束程序。最后输出求解全部数独问题花费的时间。

主要变量：
#define MAXNUM 1000   /*数独游戏个数，初始阶段可以设置成100，即只做前100道题*/

项目资源
* 包含1000道数独问题的名为sudoku的文件夹。
* sudokuStudentEnd_toBeSolved.cpp文件（学生需要补充readFromFile函数读取文件，补充solveSudoku函数求解数独问题）。

项目完成时间2021-7-16 13:45  
生成时间 0~1毫秒  
计算时间 0~1毫秒  