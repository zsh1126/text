#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	//s���ùػ�
	//shutdown -s -t 60s
	char input[] = { 0 };
	
	system("shutdown -s -t 120");
	while (1)
	{
		printf("��ע�⣬ϵͳ����һ����֮��ر�,�����룺ȡ���ػ�\n������>:");
		scanf("%s", input);
		if (strcmp(input, "ȡ���ػ�") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}