
#include<stdio.h>
#include<math.h>
//每调用一次函数，num增加1
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
////二分查找
//int binary_search(int arr[], int k,int sz)//本质上arr是指针
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
//	int ret = binary_search(arr, k,sz);//传递过去的是数组首元素的地址
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了,下表是%d\n", ret);
//	}
//	return 0;
//}
//
//
//

////打印1000-2000的闰年
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
//	//打印100-200之间的素数
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
//打印闰年