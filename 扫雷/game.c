#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//����
void InitBoard(char lei1[ROS][COS], int ros, int cos, char set)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	
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
int get_lei1_count(char lei1[ROS][COS], int x, int y)//��1��-��0��=1�����֣�//������Χ��8���ַ����������ӵ���1
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
		printf("���������׵����꣺ > ");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ro && y >= 1 && y <= co)//����Ϸ�
		{
			if (lei1[x][y] == '1')//����
			{
				printf("���ź�����Ϸ����\n");
				DisplayBoard(lei1, RO, CO);
				break;
			}
			else//������
			{
				int count=get_lei1_count(lei1, x, y);//��������Χ�м�����
				lei2[x][y] = count + '0';
				DisplayBoard(lei2, RO, CO);
				win++;
			}
		}
		else
		{
			printf("��������Ƿ�������������!\n");
		}
	}
	if (win == ro * co - LEICOUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(lei1, RO, CO);
	}
}