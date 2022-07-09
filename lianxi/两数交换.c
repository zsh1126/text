#include <stdio.h>
void EX(int *x,int *y)
{
	int tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
	printf("m=%d,n=%d\n",*x,*y);
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	EX(&m,&n);
return 0;
}
