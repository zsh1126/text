#include <stdio.h>
#define N (3.0e-23)
#define M 950 
int main(int argc,const int *argv[])
{
int num;
double sum;//夸脱数
scanf("%d",&num);//从终端获取一个整数
sum=M/N;
printf("%d夸脱水有%e的水分\n",num,sum);
	return 0;
}
