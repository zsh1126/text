#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int count = 0;
void hnt(char A, char B, char C, int n)
{
	if (n == 1)
	{
		count++;
		printf("需要%d步，把第%d层从%c挪到%c上面\n", count, n, A, C);
	}
	else
	{
		hnt(A, C, B, n - 1);
		count++;
		printf("需要%d步，把第%d层从%c挪到%c上面\n", count, n, A, C);
		hnt(B, A, C, n - 1);
	}
}
int main()
{
	int n = 0;
	char A = 'A',B = 'B', C = 'C';
	scanf("%d", &n);
	hnt(A, B, C, n);
	return 0;

}