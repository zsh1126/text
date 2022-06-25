#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);//9
	printf("*pFloat的值为：%f\n", *pFloat);//0.00000000
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);//1091567616
	printf("*pFloat的值为：%f\n", *pFloat);//9.0000000
	return 0;
}