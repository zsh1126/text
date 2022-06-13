#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("************************\n");
	printf("****1.play 0.exit*******\n");
	printf("************************\n");
}
void game()
{
	//雷的存储信息
	//1.布置好雷的存储信息
	char lei1[ROS][COS]={0};//11*11
	//2.排查雷的信息
	char lei2[ROS][COS] = { 0 };
	//初始化
	InitBoard(lei1, ROS, COS,'0');
	InitBoard(lei2, ROS, COS, '*');
	//打印棋盘
	//DisplayBoard(lei1, RO, CO);
	DisplayBoard(lei2, RO, CO);
	//布置雷
	SetLei(lei1, RO, CO);
	DisplayBoard(lei1, RO, CO);
	//扫雷
	FindBoard(lei1,lei2, RO, CO);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("选择错误，请重新输入!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}