#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RO 9
#define CO 9
#define ROS RO+2
#define COS RO+2
#define LEICOUNT 80
//ÉùÃ÷º¯Êý
void InitBoard(char lei1[ROS][COS], int ros, int cos, char set);
void DisplayBoard(char lei1[ROS][COS], int ro, int co);
void SetLei(char lei1[ROS][COS], int ro, int co);
void FindBoard(char lei1[ROS][COS],char lei2[ROS][COS],int ro ,int co );