#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//这里不是判断，而是赋值，i = 5表达式的结果是5
//			printf("%d ", i);//5 5
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//	case 1:
//		printf("1\n");
//		break;
//	case 2:
//		printf("2\n");
//		break;
//	default:
//		printf("呵呵\n");
//		break;
//	}
//
//	return 0;
//}

//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}

#include <stdio.h>
//
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//写代码将三个整数数按从大到小输出
//
//void Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d %d %d", &a, &b, &c);
//	//调整
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	//输出
//	printf("%d %d %d\n", a, b, c);//
//	return 0;
//}
//
//

//写一个代码打印1-100之间所有3的倍数的数字

//int main()
//{
//	int i = 0;
//
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//
//	for (i = 3; i <= 100; i+=3)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//给定两个数，求这两个数的最大公约数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//求最大公约数
//	int min = (a < b) ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d\n", m);
//
//	return 0;
//}
//

//辗转相除法

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d %d", &a, &b);//18 24
//	//求最大公约数
//	while (c=a%b)
//	{
//		a = b;
//		b = c;
//	}
//
//	printf("%d\n", b);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//
//

//
//编写程序数一下 1 到 100 的所有整数中出现多少个数字9
//
//9 19 29 39 49 59 69 79 89 99
//90 91 92 93 94 95 96 97 98 99

//int main()
//{
//	int i = 0;
//	int count = 0;//计数
//	for (i = 1; i <= 100; i++)
//	{
//		//判断个位是不是9
//		if (i % 10 == 9)
//			count++;
//		//判断十位是不是9
//		if (i / 10 == 9)
//			count++;
//	}
//
//	printf("count = %d\n", count);
//
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//分子总是1
//分母是1~100

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//
//	printf("%lf\n", sum);
//
//	return 0;
//}



//求10 个整数中最大值


//int main()
//{
//	//准备10个整数
//	int arr[10] = { -3,-1,-5,-2,-9,-7,-8,-4,-10,-6};
//	//找出最大值
//	int max = arr[0];
//	//
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}
//
//int main()
//{
//	//准备10个整数
//	int arr[10] = {0};
//	//输入数字
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//找出最大值
//	int max = arr[0];
//	//
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//
//int main()
//{
//	//这是一个错误的示范
//	//准备10个整数
//	int arr[] = { 0 };
//	//int arr[1] = {0};//
//	//这里没有指定数组的元素个数，就会根据初始化的内容来推算元素的个数
//	
//	//输入数字
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//找出最大值
//	int max = arr[0];
//	//
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}


//在屏幕上输出9*9乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//....
//
//
//int main()
//{
//	int i = 0;
//	//打印9行
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d ", i, j, i * j);
//
//		printf("\n");
//	}
//
//	return 0;
//}
//

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	printf("%d\n", z);
//	return z;
//}
//
//
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	{
//		int num = 2022;
//	}
//	//printf("%d\n", num);//err
//	return z;
//}
//
//int Sub(int x, int y)
//{
//	int z = x - y;
//	return z;
//}
//
//int main()
//{
//
//	return 0;
//}
//
//

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d ", i, j, i * j);
//
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//
//	return 0;
//}

//
//int test()
//{
//	return (3, 4);
//}
//
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret);
//
//	return 0;
//}

//void test(int arr[])
//{
//	arr[0] = 3;
//	arr[1] = 4;
//	//3,4
//}
//
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//
//	return 0;
//}
//
//int a = 0;
//int b = 0;
//
//void test()
//{
//	a = 3;
//	b = 4;
//	//3,4
//}
//
//int main()
//{
//	test();
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}




//void test(int* px, int*py)
//{
//	*px = 3;
//	*py = 4;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//

//
//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//1~10
//	//1~100
//	//数组 - 一组相同类型元素的集合
//
//	int arr[10];
//	char ch[5];
//	double data1[20];
//	double data2[15+5];
//
//	//下面的代码只能在支持C99标准的编译器上编译
//	int n = 10;
//	scanf("%d", &n);
//	int arr2[n];//这种数组是不能初始化
//
//	//在C99标准之前，数组的大小必须是常量或者常量表达式
//	//在C99之后，数组的大小可以是变量，为了支持变长数组
//
//	return 0;
//}



//int main()
//{
//	//不完全初始化，剩余的元素默认初始化为0
//	int arr[10] = { 1,2,3 };
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[] = { 1,2,3 };
//
//	char ch1[10] = { 'a', 'b', 'c' };
//	//a b c 0 0 0 0 0 0 0
//	char ch2[10] = "abc";
//	//a b c \0 0 0 0 0 0 0
//	char ch3[] = { 'a', 'b', 'c' };
//	char ch4[] = "abc";
//	return 0;
//}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//            0 1                9
	//[] - 下标引用操作符
	//printf("%d\n", arr[4]);
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//10
	//打印数组的每个元素的地址
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}

	/*for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}*/
	/*for (i = sz - 1; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}*/
	return 0;
}





