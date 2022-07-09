#include <stdio.h>

int main()
{
int a=0,b=0;
scanf("%d%d",&a,&b);
int tmp=a;
a=b;
b=tmp;
printf("a=%d,b=%d\n",a,b);
return 0;
}

