#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////数组参数、指针参数
////一维数组传参
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int *arr)
//{}
//void test2(int *arr[20])
//{}
//void test2(int **arr)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test(arr2);
//	return 0;
//}
//


//二维数组传参
//void test(int arr[3][5])
//{}
//void test1(int arr[][5])//行可以省略
//{}
//void test2(int arr[3][])//列不可以省略//err
//{}
//void test(int arr[][])//行列不能省略，只能省略行//err
//{}
//void test(int *arr)//err//数组名是首元素地址
//{}
//void test4(int **arr)//err
//{}
//void test5(int(*arr)[5])//bingo
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}


////一级指针传参
//void test(int*p)
//{
//
//}
//void test2(char*p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test(&a);
//	test(p1);
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);
//	return 0;
//}


//二级指针传参
//void test(int** ptr)
//{
//	printf("num=%d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	int* arr[10];
//	test(arr);//指针数组
//	return 0;
//}


//函数指针 - 指向函数的指针 - 存放函数地址的指针
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
////	printf("%d\n", Add(a, b));
////	printf("%p\n", &Add);
////	//&函数名和函数名都是函数的地址
////	printf("%p\n", Add);
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));//5
//}

//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = print;//char*函数的参数类型；print为指针变量；返回类型void
//	(*p)("hello bit");
//}


//代码1
//(*(void(*)())0)();
////把0强制类型转换成：void(*)()函数指针类型 -0就是一个函数的地址
////调用0地址处的该函数
//
////代码2
//void (*signal(int, void(*)(int)))(int);
////signal函数声明；
////int,void(*)(int)为signal函数的两个参数；void(*)(int)为函数指针，该函数指针指向的函数的参数是int，返回类型是void
////signal的返回类型也是一个函数指针：指针指向的函数的参数是int，返回类型是void
//void (*     signal(int, void(*)(int)) )(int)
////简化
//typedef void(*pfun_t)(int);//typedef - 重命名
//pfun_t signal(int, pfun_t);


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;//pa == Add
//	printf("%d\n", (pa)(2, 3));
//	//pa - 函数名 - 地址
//	printf("%d\n", (*pa)(2, 3));//5
//}


//函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组
//	int* arr[5];
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}


//my_strcpy(char* dest, const char* src);
////写一个函数指针pf，能够指向my_strcpy
////写一个函数指针数组，能够存放4个my_strcpy函数的地址
//char *(*pf)(char*, const char*) = my_strcpy;
//char *(*pfarr[4])(char*, const char*) = {my_strcpy};


//计算器
//void menu()
//{
//	printf("***************************************************\n");
//	printf("*******************1.Add  2.Sub *******************\n");
//	printf("*******************3.Mul  4.Div********************\n");
//	printf("*******************0.Exit *************************\n");
//	printf("***************************************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfarr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两位操作数：>");
//			scanf("%d%d", &x, &y);
//			int ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//			printf("输入错误\n");
//	} while (input);
//	return 0;
//}


//2/
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void Calc(int(*pf)(int, int))//回调函数：接收一个函数的地址，通过收到的地址去调用所指向的函数
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误\n");
//		}
//	} while (input);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//	int(*pf)(int, int);//函数指针
//	int(*pfArr[4])(int, int);//pfArr是一个数组-函数指针的数组
//	int (*(*ppfArr)[4])(int, int)=&pfArr;
//	//ppfArr是一个指向函数指针数组的指针
//	//ppfArr是一个指针，指针指向数组的四个元素
//	//指向的数组的每个元素的类型是一个函数指针int(*)(int,int)
//	return 0;
//}


////回调函数
//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//}

void BubbleSort(int arr, int sz)
{

}
//qsort -可以排序任意类型的数据
int main()
{
	//冒泡排序函数
	//冒泡排序函数排序整形数组
	int arr[] = { 1,3,5,7,9,2,4,6,8,2,4,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}