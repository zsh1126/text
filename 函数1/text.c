#include<stdio.h>
#include"Add.h"
#define _CRT_SECURE_NO_WARNINGS 1
//쳲���������
int Fbnq(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int Fbn(int n)//�ݹ�
{
	if (n <= 2)
		return 2;
	else
		return Fbn(n - 1) + Fbn(n - 2);
}
int main()//TDD--������������
{
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = Fbnq(n);
	printf("ret=%d\n", ret);
	return 0;
}
// 
// 
// 
//��n�Ľ׳�
//int Fac1(int n)//����
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int  Fac2(int n)//�ݹ�
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}
//
//
//

////���ַ�������,��ʹ��strlen,��ʹ����ʱ����
//int my_strlen(char* str)//�ݹ�˼��
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//	
//	//int count = 0;//countΪ��ʱ����
//	//while (*str!='\0')
//	//{
//	//	count++;
//	//	str++;
//	//}
//	//return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
// 
// 
//void print(int n)
//{
//	if (n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ  ex�����룺1234�����1 2 3 4 .
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//
//	////
//	////
//	///*int a = 10;
//	//int b = 20;
//	//int sum = Add(a, b);
//	//printf("%d\n", sum);*/
//	return 0;
//}