#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;//pΪָ�����
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
//	*pc = 0;//ָ�����;�����ָ����н����ò�����ʱ���ж��Ȩ�ޣ��ܲ��������ֽڣ���
//	/*printf("%p\n", pa);*/
//	printf("%p\n", pc);
//	return 0;
//}


//int main()
//{
//	//ָ�����;����ˣ�ָ����һ���߶�Զ��ָ��Ĳ�������
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
// //Ұָ��
//	int a;//�ֲ���������ʼ����Ĭ��Ϊ���ֵ
//	int* p;//�ֲ���ָ��������ͱ���ʼ��Ϊ���ֵ
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
//	return 0;//ָ��Խ�����-->Ұָ��
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
