#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////���������ָ�����
////һά���鴫��
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


//��ά���鴫��
//void test(int arr[3][5])
//{}
//void test1(int arr[][5])//�п���ʡ��
//{}
//void test2(int arr[3][])//�в�����ʡ��//err
//{}
//void test(int arr[][])//���в���ʡ�ԣ�ֻ��ʡ����//err
//{}
//void test(int *arr)//err//����������Ԫ�ص�ַ
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


////һ��ָ�봫��
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


//����ָ�봫��
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
//	test(arr);//ָ������
//	return 0;
//}


//����ָ�� - ָ������ָ�� - ��ź�����ַ��ָ��
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
////	//&�������ͺ��������Ǻ����ĵ�ַ
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
//	void (*p)(char*) = print;//char*�����Ĳ������ͣ�printΪָ���������������void
//	(*p)("hello bit");
//}


//����1
//(*(void(*)())0)();
////��0ǿ������ת���ɣ�void(*)()����ָ������ -0����һ�������ĵ�ַ
////����0��ַ���ĸú���
//
////����2
//void (*signal(int, void(*)(int)))(int);
////signal����������
////int,void(*)(int)Ϊsignal����������������void(*)(int)Ϊ����ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
////signal�ķ�������Ҳ��һ������ָ�룺ָ��ָ��ĺ����Ĳ�����int������������void
//void (*     signal(int, void(*)(int)) )(int)
////��
//typedef void(*pfun_t)(int);//typedef - ������
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
//	//pa - ������ - ��ַ
//	printf("%d\n", (*pa)(2, 3));//5
//}


//����ָ������
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
//	//ָ������
//	int* arr[5];
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}


//my_strcpy(char* dest, const char* src);
////дһ������ָ��pf���ܹ�ָ��my_strcpy
////дһ������ָ�����飬�ܹ����4��my_strcpy�����ĵ�ַ
//char *(*pf)(char*, const char*) = my_strcpy;
//char *(*pfarr[4])(char*, const char*) = {my_strcpy};


//������
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
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("��������λ��������>");
//			scanf("%d%d", &x, &y);
//			int ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//			printf("�������\n");
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
//void Calc(int(*pf)(int, int))//�ص�����������һ�������ĵ�ַ��ͨ���յ��ĵ�ַȥ������ָ��ĺ���
//{
//	int x = 0;
//	int y = 0;
//	printf("������������������>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("�������\n");
//		}
//	} while (input);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//	int(*pf)(int, int);//����ָ��
//	int(*pfArr[4])(int, int);//pfArr��һ������-����ָ�������
//	int (*(*ppfArr)[4])(int, int)=&pfArr;
//	//ppfArr��һ��ָ����ָ�������ָ��
//	//ppfArr��һ��ָ�룬ָ��ָ��������ĸ�Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ��int(*)(int,int)
//	return 0;
//}


////�ص�����
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
//qsort -���������������͵�����
int main()
{
	//ð��������
	//ð��������������������
	int arr[] = { 1,3,5,7,9,2,4,6,8,2,4,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}