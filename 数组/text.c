#include<stdio.h>
int main()
{//��ά����
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
//	int arr[10] = { 1��2��3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = { 'a','b' };//
//	char arr3 = "ab";//ok
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//sizeof����arr4��ռ�ռ��С//7��Ԫ��--char 7*1=7
//	printf("%d\n", strlen(arr4));//strlen���ַ�������-'\0'ִ�ڵ��ַ�����
//	
//	return 0;
//}