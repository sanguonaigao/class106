#define _CRT_SECURE_NO_WARNINGS

//���������Ͷ���
#include <stdio.h>
#include "add.h"

////���뾲̬��
//#pragma comment(lib, "add.lib")
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//30 40
//	
//    //�ӷ�
//	int sum = Add(a, b);
//	printf("%d\n", sum);//70
//
//	//int ret = Sub(a, b);
//	//printf("%d\n", ret);//-10
//
//	return 0;
//}
//

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//���磺
//���룺1234����� 1 2 3 4.

//�ݹ��ʵ��

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//
//	}
//	printf("%d ", n % 10);//
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	print(num);//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//
//	return 0;
//}

//print(1234)
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4
//1 2 3 4


//%d �Ǵ�ӡ�з��ŵ�����(����������)
//%u �Ǵ�ӡ�޷��ŵ�����
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//1 2 3 4
//	//[4 3 2 1]
//	//
//	while (num)
//	{
//		printf("%d ", num % 10);
//		num = num / 10;
//	}
//	//1 2 3 4
//	//printf("%u\n", num);
//
//	return 0;
//}

//��д��������������ʱ���������ַ����ĳ��ȡ�

//���ַ����ĳ���
//ģ��ʵ��strlen

#include <string.h>
//int my_strlen(char str[])//��������д���������ʽ

//int my_strlen(char* str)//��������д��ָ�����ʽ
//{
//	int count = 0;//��������ʱ����
//	while (*str != '\0')
//	{
//		count++;
//		str++;//����һ���ַ�
//	}
//	return count;
//}

//�ݹ����

//my_strlen("abc");
//1+my_strlen("bc");
//1+1+my_strlen("c")
//1+1+1+my_strlen("")
//1+1+1+0
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";//[a b c \0]
//	//char* 
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//
//	return 0;
//}

//�ݹ�ʵ��
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}

//�����ķ�ʽ-�ǵݹ�
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//

//
//���n��쳲�������
//쳲���������
//1 1 2 3 5 8 13 21 34 55 ...
//
//
//int count = 0;
//
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
////40
////39    38
////38    37    37    36
////37 36 36 35 36 35 35 34
////...
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	//printf("%d\n", count);
//	return 0;
//}
//

//
//void test(int n)
//{
//	if (n < 10000)
//		test(n + 1);
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}
//
//
