#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	//F9切换断点
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	return 0;
//}


//VC6.0环境下 <=10 死循环
// gcc编译器下<=11死循环
// vs   <=12死循环
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	return 0;
//}


//调试代码
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);//3  1！+2!+3!=1+2+6=9
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//	system("pause");
//	return 0;
//}


//模拟实现strcpy
//void my_strcpy(char* dest,  char* src)//未优化时
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		*dest++;
//		*src++;
//	}
//	*dest = *src;
//}
//char* my_strcpy(char* dest, const char* src)//优化后
//{
//	char* ret = dest;
//	assert(dest!=NULL);//断言
//	assert(src != NULL);//把src指向的字符拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[] = "############";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr, arr2));
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	int*const p = &num;//const 放在指针变量的*左边，修饰的是*p，不能通过p来改变*p（num)的值
//	//const放在指针变量*右边，修饰的是指针变量本身，p不能被改变
//	*p = 20;
//	printf("%s\n", num);
//	return 0;
//}

 

//模拟strlen
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);//保证指针的有效性
	while (*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "asdfgsd";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
