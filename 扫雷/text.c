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
	//�׵Ĵ洢��Ϣ
	//1.���ú��׵Ĵ洢��Ϣ
	char lei1[ROS][COS]={0};//11*11
	//2.�Ų��׵���Ϣ
	char lei2[ROS][COS] = { 0 };
	//��ʼ��
	InitBoard(lei1, ROS, COS,'0');
	InitBoard(lei2, ROS, COS, '*');
	//��ӡ����
	//DisplayBoard(lei1, RO, CO);
	DisplayBoard(lei2, RO, CO);
	//������
	SetLei(lei1, RO, CO);
	DisplayBoard(lei1, RO, CO);
	//ɨ��
	FindBoard(lei1,lei2, RO, CO);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("ѡ���������������!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}