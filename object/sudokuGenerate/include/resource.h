#ifndef _RESOURCE_H_
#define _RESOURCE_H_ 1

#include <iostream>
#include <fstream>
#include <string>

#define MAXNUM 1000                 // ������Ϸ�ĸ���
#define SEED 20171212               // ������������ɵ�����
#define LINECOUNT 9                 // ���̴�С
#define BUILD_FILE_NAME "��.txt"    // �𰸵���־
#define CHECKER_FILE_NAME "��.txt"  // ������ϵ���
#define ANSWER_FILE_NAME "���.txt" // �����־
#define DIFFICULTY 40               // �Ѷ�(������������5%�Ĳ���)

extern int checker_board[LINECOUNT][LINECOUNT]; // ����
extern int random_array[LINECOUNT];             // �����������

void Board_Init_();                            // ���̳�ʼ��
void Random_Array_Init();                      // ������������ʼ��
void MyPrint();                                // ��ӡ����
void randomFirstRow(int *a0);                  // ������ɵ�һ��
bool Digit(int i, int j);                      //�������
bool CheckNumber(int i, int j);                // ��������Ƿ���ϵ�ǰλ��
bool CheckSudoku(int i, int j, int number);    // ��鵱ǰ��������Ƿ������������
void FileInput(char *filename, int count);     // ����ǰ�������������ʽ¼�뵽�ļ���
void FileInit(char *filename);                 // �ļ���ʼ��
void BuildCheckerBoard();                      // ��������
int GetDifficultyNumber();                     // ������Ѷ�����
void Get_Checker_By_File(std::ifstream &file); // ���ļ���ȡ����
bool Answer_Checker(int i, int j);             // �ƽ�
bool Get_Checker_Zero(int *i, int *j);         // ��ȡ���̵�0��λ

#endif