#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	char arr[] = "asdfg";
//		char* pc = arr;
//		printf("%s\n", arr);
//		printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	char* p = "asdfgf";//�����ַ���
//	printf("%c\n", *p);
//	printf("%s\n", p);
//}
//int main()
//{
//	char* p = "asdfgfd";
//	*p = 'W';
//	printf("%s\n", p);
//}

//������
// haha 
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2)//��Ԫ�ص�ַ��ͬ
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//}


//hehe
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (p1 == p2)//ͬʱָ��ͬ1���ռ��ַ����ʼ��ַ
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//}


//ָ������
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//����ָ�������-ָ������
//	char pch[5];//�������ָ�������-ָ������
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d", *(arr[i]));
//	}
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����ָ��-ָ��
//
//int main()
//{
//	int* p = NULL;//����ָ�� - ָ�����ε�ָ�� - ������εĵ�ַ
//	char* p = NULL;//pc���ַ�ָ�� - ֻ���ַ���ָ�� - ����ַ��ĵ�ַ
//	//����ָ�� - ָ�������ָ�� - �������ĵ�ַ -�������ĵ�ַ
//	int arr[10] = { 0 };
//	//arr -��Ԫ�صĵ�ַ
//	//&arr[0] -��Ԫ�صĵ�ַ
//	//&arr - ����ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//����ĵ�ַ��Ҫ������
//	return 0;
//
//}

/*nt main()
{
	char* arr[5];
	char*(*pa)[5] = &arr;
	int arr2[10] = { 0 };
	int(*pa)[10] = &arr2;
	return 0;
}*/
//void print(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			/*printf("%d ", *(p[i] + j));*/
//			/*printf("%d ", *( * (p + i) + j));
//			printf("%d ", (*(p + i))[j]);*/
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{ 6,7,8,9,10 },{5,4,6,7,9} };
//	print(arr,3,5);
//	return 0;
//}


int arr[5];//arr��һ��5��Ԫ�ص���������
int* parr1[10];//parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*,parr1��ָ������
int(*parr2)[10];//parr2��һ��ָ�룬��ָ��ָ����1�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int  -parr2��һ������ָ��
int (*parr3[10])[5];//parr3��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ������������Ԫ�أ�ÿ��Ԫ����int