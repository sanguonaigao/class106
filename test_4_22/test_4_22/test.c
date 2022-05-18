#define _CRT_SECURE_NO_WARNINGS

//函数声明和定义
#include <stdio.h>
#include "add.h"

////导入静态库
//#pragma comment(lib, "add.lib")
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//30 40
//	
//    //加法
//	int sum = Add(a, b);
//	printf("%d\n", sum);//70
//
//	//int ret = Sub(a, b);
//	//printf("%d\n", ret);//-10
//
//	return 0;
//}
//

//接受一个整型值（无符号），按照顺序打印它的每一位。
//例如：
//输入：1234，输出 1 2 3 4.

//递归的实现

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
//	print(num);//接受一个整型值（无符号），按照顺序打印它的每一位。
//
//	return 0;
//}

//print(1234)
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4
//1 2 3 4


//%d 是打印有符号的整数(会有正负数)
//%u 是打印无符号的整数
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

//编写函数不允许创建临时变量，求字符串的长度。

//求字符串的长度
//模拟实现strlen

#include <string.h>
//int my_strlen(char str[])//参数部分写出数组的形式

//int my_strlen(char* str)//参数部分写出指针的形式
//{
//	int count = 0;//计数，临时变量
//	while (*str != '\0')
//	{
//		count++;
//		str++;//找下一个字符
//	}
//	return count;
//}

//递归求解

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

//递归实现
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}

//迭代的方式-非递归
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
//求第n个斐波那契数
//斐波那契数列
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
