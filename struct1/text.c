#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//struct stu//struct---�ṹ��ؼ���   stu--�ṹ���ǩ  stuct stu--�ṹ������
//{
//	//��Ա����
//	char name[10];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//������ȫ�ֵĽṹ�����
//int main()
//{
//	struct stu s;//�����ṹ�����
//	return 0;
//}

//typedef struct Stu
//{
//	//��Ա����
//	char name[10];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
// {
//	Stu s1={"����",20,"1414342352","��"};//�����ṹ�����
//	struct Stu s2={"����",30,"234567876543","����"};
//	return 0;
//}


//struct S//
//{
//	//��Ա����
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr};//��ʼ��
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

typedef struct Stu
{
	//��Ա����
	char name[10];
	short age;
	char tele[12];
	char sex[5];
}Stu;
void print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}
void print2(Stu *ps)
{
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);
}
int main()
{
	Stu s = { "����",40,"12345678976","��" };
	print1(s);
	print2(&s);
	return 0;
}
