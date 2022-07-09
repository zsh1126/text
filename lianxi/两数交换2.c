#include<stdio.h>
int main()
{
	int a=0,b=0;
	scanf("%d\n%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d,b=%d\n",a,b);
return 0;
}
