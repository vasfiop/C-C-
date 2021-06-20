/*
模拟生成大量不重复的随机数
*/
#define _RANDOM_ 1
#ifdef _RANDOM_ 

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
#include<cstring>
#include<windows.h>
#include<fstream>

using namespace std;

#define RANDSIZE RAND_MAX//模拟随机数数量
#define FORSIZE 1000

struct RAND_
{
    int num;
    RAND_ *next;
};

RAND_ * StartStruct(RAND_ *head);
RAND_ *DeleteStruct(RAND_ *head,int position);
int GetPosNum(RAND_ *head,int position);

#endif