#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	double a= 5 / 2;
//	printf("%lf\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b << 1;
//	//int b=a >> 1;//>>���Ʋ��������ƶ����Ƕ�����λ
//	printf("%d\n", b);
//	return 0;
//}

//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d\n", c);
//	return 0;
//}


//��һ���������ڴ��ж������еĸ���--����
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> 1) & 1))
//			count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	a = a + 2;
//	a += 2;
//
//	a = a >> 1;
//	a >> =1;
//	a = a & 1;
//	a &= 1;
//}


//int main()
//{
//	int a = 4;
//	p = &a;//ȡ��ַ������
//	*p=20;//�����ò�����
//	return 0;
//}

int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));

	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(char *));

	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(int [10]));
	return 0;
}