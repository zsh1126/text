#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	//s设置关机
	//shutdown -s -t 60s
	char input[] = { 0 };
	
	system("shutdown -s -t 120");
	while (1)
	{
		printf("请注意，系统将在一分钟之后关闭,请输入：取消关机\n请输入>:");
		scanf("%s", input);
		if (strcmp(input, "取消关机") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}