#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;//p为指针变量
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;*/
//	char* pc = &a;
//	*pc = 0;//指针类型决定了指针进行解引用操作的时候有多大权限（能操作几个字节）。
//	/*printf("%p\n", pa);*/
//	printf("%p\n", pc);
//	return 0;
//}


//int main()
//{
//	//指针类型决定了：指针走一步走多远（指针的步长）。
//	//int *p+1--->4
//	//char *p+1--->1
//	//double *p+1--->8
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//int main()
//{
// //野指针
//	int a;//局部变量不初始化，默认为随机值
//	int* p;//局部的指针变量，就被初始化为随机值
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}
//	return 0;//指针越界访问-->野指针
//}

int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();
	*p = 20;
	return 0;
}
