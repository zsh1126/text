#include <stdio.h>
#include <string.h>
int main(int argc,const char *argv[])
{
char str[]="helloword";
printf("str=%s\n",str);
char str1[32]="hello\0word";
printf("str=%s\n",str1);
printf("sizeof(str)=%ld\n",sizeof(str));
printf("sizeof(str)=%ld\n",strlen(str));
return 0;
}
