#include<stdio.h>
int main()
{//二维数组
	int arr[3][4] = { { 1,2,3 }, { 3,4,5 } };
	int i=0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
//int main()
//{
//	int arr[10] = { 1，2，3 };//不完全初始化，剩下的元素默认初始化为0
//	char arr2[5] = { 'a','b' };//
//	char arr3 = "ab";//ok
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//sizeof计算arr4所占空间大小//7个元素--char 7*1=7
//	printf("%d\n", strlen(arr4));//strlen求字符串长度-'\0'执勤的字符个数
//	
//	return 0;
//}