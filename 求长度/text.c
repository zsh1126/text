//题目：
//每个句子由多个单词组成，句子中的每个单词都可能不一样，我们假设每个单词的长度n为该单词的重量，计算整个句子的平均重量V
//输入样例:
//Who Love Solo
//3.67
#define _CRT_SECURE_NO_WARNINGS 1
#define N 50
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	float v = 0;
	char str[N];
	int at = 0;
	int bt = 0;
printf("请输入:");
scanf("%[^\n]", str);
int len;
len = strlen(str);
for(i=0;i<len-1;i++)
{
	
	
		if (str[i] == ' ')
		{
			at++;
		}
		else
			bt++;

}
v = 1.0*(bt) / (1.0*(at + 1));
printf("v=%.2f\n", v);
	return 0;
}