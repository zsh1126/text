#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//2
//	printf("%d\n", s);//0
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//~��2����λȡ��///-1
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	a=a | (1 << 2);
//	printf("%d\n", a);
//	a=a& (~(1 << 2));
//	printf("%d\n", a);
//}


//void text1(int arr1[])//���鴫�ι�ȥ��������Ϊָ��
//{
//	printf("%d\n", sizeof(arr1));//4/8
//}
//void text2(char arr2[])
//{
//	printf("%d\n", sizeof(arr2));//4/8
//}
//int main()
//{
//	int arr1[10] = { 0 };
//	char arr2[10] = { 0 };
//	printf("%d\n", sizeof(arr1));//4*10
//	printf("%d\n", sizeof(arr2));//1*10
//	text1(arr1);
//	text2(arr2);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a && b;
//	int d = a || b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}

//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? -1:1);
//	printf("%d\n", max);
//	return 0;
//
//}

//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//���ú���ʱ�������Ǻ������ò�����
//	printf("max=%d\n", max);
//	return 0;
//}


//struct stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;//ʹ��struct Stu������ʹ���һ��ѧ������S1������ʼ����
//	struct stu s1 = { "����",20,"2017031310" };
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);//�ṹ�����.��Ա��
//	struct stu* ps = &s1;
//	printf("%s\n", ps->name);//(* p).== ->
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	
//}

//int main()
//{
//	//��������
//	char a = 3;    //00000000000000000000000000000011  4bit-----00000011--a
//	char b = 127;  //00000000000000000000000001111111   4bit----01111111--b
//	char c = a + b;//00000000000000000000000010000010   4bit----10000010--c
//	               //11111111111111111111111110000010----����
//	               //11111111111111111111111110000001----����
//	               //10000000000000000000000001111110----ԭ��----  -126��D��
//	printf("%d\n", c);//c=-126
//	return 0;
//}

//int main()
//{
//	//��������
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4 ��������Ϊ����--4bit
	printf("%u\n", sizeof(!c));//1
	return 0;
}