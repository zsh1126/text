#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void menu()
{
	printf("###################################\n");
	printf("#####1��play  0��exit  ############\n");
	printf("###################################\n");
}
//RAND_MAX(0-32767�����)
void game()
{
	int ret = 0;
	int guess = 0;
	//time_t//ʱ�������ǰ�������ʱ��-���������ʼʱ�䣨1970.1.1.00.00.00��=��xxx��s
	ret = rand()%100+1;//���������1-100
	/*printf("%d\n", ret);*/
	while (1)
	{
		printf("������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ǿ������ת��Ϊ����
	do
	{
		menu();
		printf("��ѡ��>��");
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
			printf("ѡ�����\n");
			break;
		}
	}
	while (input);
	return 0;
}