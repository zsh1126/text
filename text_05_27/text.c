#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("����������\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("�˻�������\n");
	}
 //   char arr1[] = "welcome to bit!!!!";
	//char arr2[] = "##################";
	//int left = 0;
	//int right = strlen(arr1)-1;
	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	Sleep(1000);
	//	system("cls");
	//	left++;
	//	right--;
	//}
	//printf("%s\n", arr2);
	return 0;
}