#define _CRT_SECURE_NO_WARNINGS 1
#include<math.h>
#include<stdio.h>
int main()
{
	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };//���ֲ��� 
	int left = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]); 
	int right = sz - 1;
	int k = 5;
	
	while (left<=right )
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
			break;
		}

	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
		//
	// 
	// 
	//int i = 0;//�˷��ھ���
	//for (i = 1; i<= 9; i++)
	//{
	//	int j = 1;
	//	for (j = 1; j <= i; j++)
	//	{
	//		printf("%d*%d=%-2d ", i, j, i * j);
	//	}
	//	printf("\n");
	//}
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//��ʮ�����������ֵ
	//int max = arr[0];
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 1; i < sz; i++)
	//{
	//	if (arr[i] > max)
	//		max = arr[i];
	//}
	//printf("max=%d\n", max);
	//// 
	// 
	////����1/1-1/2+1/3-1/4+������+1/99-1/100��ֵ����ӡ�����
	//int i = 0;
	//double sum = 0.0;
	//int flag = 1;
	//for (i = 1; i <= 100; i++)
	//{
	//	sum += flag * 1.0 / i;
	//	flag = -flag;
	//}
	//printf("%lf\n", sum);
	//
	// 
	// 
	//int i = 0;//100����9�ĸ���
	//int count = 0;
	//for (i = 1; i < 100; i++)
	//{
	//	if (i % 10 == 9)
	//		count++;
	//	if (i / 10 == 9)
	//		count++;

	//}
	//printf("\ncount=%d", count);
	// 
	// 
	//int i = 0;//��ӡ����
	//int count = 0;
	//for (i = 100; i <= 200; i++)
	//{
	//	//�ж������Ĺ���
	//	//1.�Գ���//2.sqrt��ƽ������ѧ����
	//	int j = 0;
	//	for (j = 2; j < sqrt(i); j++)
	//	{
	//		if (i%j == 0)
	//		{
	//			break;
	//		}
	//	}
	//	if (j >sqrt(i))
	//	{
	//		count++;
	//		printf("%d ", i);
	//	}
	//}
	//printf("\ncount=%d\n", count);
	// 
	// 
	//int year = 0;//��ӡ����
	//int count = 0;
	//for (year = 1000; year <= 2000; year++)
	//{
	//	if (year % 4 == 0 && year % 100 != 0)
	//	{
	//		printf("%d ", year);
	//		count++;
	//	}
	//	else if(year%400==0)
	//	{
	//		printf("%d ", year);
	//		count++;
	//	}
	//}
	//printf("\ncount=%d\n", count);
	// 
	// 
	//int m = 0;//���Լ��(շת�����)
	//int n = 0;
	//int r = 0;
	//scanf("%d%d", &m, &n);
	//while (r=m%n)
	//{
	//	/*r = m % n;*/
	//	m = n;
	//	n = r;
	//}
	//printf("%d\n", n);

	////��������С�������
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//scanf("%d%d%d", &a,  &b, &c);
	//if (a <b)
	//{
	//	int tmp = a;
	//	a = b;
	//	b = tmp;
	//}
	//if (a < c)
	//{
	//	int tmp = a;
	//	a = c;
	//	c = tmp;
	//}
	//if (b < c)
	//{
	//	int tmp = b;
	//	b = c;
	//	c = tmp;
	//}
	//printf("%d %d %d\n", a, b, c);
	return 0;
}