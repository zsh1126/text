
#include<stdio.h>
#include<math.h>
//ÿ����һ�κ�����num����1
void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
Add(&num);
printf("num=%d\n", num);
Add(&num);
printf("num=%d\n", num);
Add(&num);
printf("num=%d\n", num);
return 0;
}
// 
// 
////���ֲ���
//int binary_search(int arr[], int k,int sz)//������arr��ָ��
//{
//	
//	int left=0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);//���ݹ�ȥ����������Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±���%d\n", ret);
//	}
//	return 0;
//}
//
//
//

////��ӡ1000-2000������
//int is_leap_year(int i)
//{
//	if((i%4==0&&i%100!=0)||(i%400==0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//		
//	}
//	return 0;
//}
// 
// 
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	//��ӡ100-200֮�������
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
// 
// 
// 
//void swap1(int *pa,int *pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("a=%d b=%d\n", a, b);
////	swap1(&a, &b);
////	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}
//
//
//��ӡ����