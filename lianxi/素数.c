#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int i, j;
	int count = 0;
	for (i = 1; i < 100; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
			
			else if (j == i - 1)
			{
				count++;
				if (count % 4 == 0)
				{
					printf("\n");
				}
				printf("%d ", i);
			}
		}
	}
return 0;
}
