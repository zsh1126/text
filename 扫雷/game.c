#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//定义
void InitBoard(char lei1[ROS][COS], int ros, int cos, char set)
{
	int i = 0;
	int j = 0;
	//打印列好
	
	for (i = 0; i < ros; i++)
	{
		
		for (j = 0; j < cos; j++)
		{
			lei1[i][j] = set;
		}
	}
}
void DisplayBoard(char lei1[ROS][COS], int ro, int co)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= ro; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=ro; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= co; j++)
		{
			printf("%c ", lei1[i][j]);
		}
		printf("\n");
	}
}
void SetLei(char lei1[ROS][COS], int ro, int co)
{
	int count = LEICOUNT;
	while (count)
	{
		int x = rand()%ro+1;//1-9
		int y = rand() % co + 1;
		if (lei1[x][y]=='0')
		{
			lei1[x][y] = '1';
			count--;
		}
	}
}
int get_lei1_count(char lei1[ROS][COS], int x, int y)//‘1’-‘0’=1（数字）//坐标周围的8个字符变成数字相加等于1
{
	return lei1[x - 1][y] +
		lei1[x - 1][y - 1] +
		lei1[x][y - 1] +
		lei1[x + 1][y - 1] +
		lei1[x + 1][y] +
		lei1[x + 1][y + 1] +
		lei1[x][y + 1] +
		lei1[x - 1][y + 1] - 8 * '0';

}
void FindBoard(char lei1[ROS][COS], char lei2[ROS][COS],int ro, int co)
{
	int win = 0;
	int x=0;
	int y = 0;
	while (win < ro * co - LEICOUNT)
	{
		printf("请输入排雷的坐标： > ");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ro && y >= 1 && y <= co)//坐标合法
		{
			if (lei1[x][y] == '1')//踩雷
			{
				printf("很遗憾，游戏结束\n");
				DisplayBoard(lei1, RO, CO);
				break;
			}
			else//不是雷
			{
				int count=get_lei1_count(lei1, x, y);//计算雷周围有几个雷
				lei2[x][y] = count + '0';
				DisplayBoard(lei2, RO, CO);
				win++;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入!\n");
		}
	}
	if (win == ro * co - LEICOUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(lei1, RO, CO);
	}
}