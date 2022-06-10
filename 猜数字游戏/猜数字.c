#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void menu()
{
	printf("###################################\n");
	printf("#####1：play  0：exit  ############\n");
	printf("###################################\n");
}
//RAND_MAX(0-32767随机数)
void game()
{
	int ret = 0;
	int guess = 0;
	//time_t//时间戳：当前计算机的时间-计算机的起始时间（1970.1.1.00.00.00）=（xxx）s
	ret = rand()%100+1;//生成随机数1-100
	/*printf("%d\n", ret);*/
	while (1)
	{
		printf("猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//强制类型转换为整形
	do
	{
		menu();
		printf("请选择>：");
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
			printf("选择错误\n");
			break;
		}
	}
	while (input);
	return 0;
}