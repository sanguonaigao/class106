#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//
//	return 0;
//}



//写一个函数可以交换两个整形变量的内容。
//形参 - 形式参数
////void Swap(int x, int y)
////{
////	int z = 0;
////	z = x;
////	x = y;
////	y = z;
////}
//
////当实参传递给形参的时候，形参是实参的一份临时拷贝
////对形参的修改不能改变实参
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//void Swap2(int* px, int* py)
//{
//	int z = 0;
//	z = *px;//z = a;
//	*px = *py;//a=b;
//	*py = z;//b=z
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);//10 20
//
//	int c = Add(a, b);
//	//int c = Add(Add(a,3), b);
//	printf("%d\n", c);
//	printf("交换前:a=%d b=%d\n", a, b);
//	//交换
//	
//	//实参 - 实际参数
//	Swap(a, b);
//	Swap2(&a, &b);
//
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}

//
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int* px, int* py)
//{
//	int z = 0;
//	z = *px;//z = a;
//	*px = *py;//a=b;
//	*py = z;//b=z
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);//10 20
//	printf("交换前:a=%d b=%d\n", a, b);
//	//实参 - 实际参数
//	//传值调用
//	Swap1(a, b);
//
//	//传址调用
//	Swap2(&a, &b);
//
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}


//写一个函数可以判断一个数是不是素数。

//打印100~200之间的素数
//素数是只能被1和他本身整除的数
//7
//1和7整除
//2 3 4 5 6
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//是素数就打印
//		//拿2~i-1之间的数字去试除i
//		int flag = 1;//flag是1，表示是素数
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

#include <math.h>

//sqrt是数学库函数
//开平方
//math.h
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		//是素数就打印
//		//拿2~i-1之间的数字去试除i
//		int flag = 1;//flag是1，表示是素数
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


//写一个函数可以判断一个数是不是素数。

//是素数返回1
//不是素数返回0
//
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		//是素数就打印
//		//拿2~i-1之间的数字去试除i
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//

//写一个函数判断一年是不是闰年
//打印1000~2000年之间的闰年
//闰年判断的规则：
//1. 能被4整除，并且不能被100整除是闰年
//2. 能被400整除是闰年
//
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年
//		if (year % 4 == 0)//2000
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//写一个函数判断一年是不是闰年

//是闰年返回1
//非闰年返回0
//
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//写一个函数，实现一个整形有序数组的二分查找。
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//找到了返回下标
//		}
//	}
//
//	return -1;//找不到
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9 
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//找到了，返回下标
//	//找不到，返回-1
//
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//
//	return 0;
//}

//
//形式参数和实际参数的名字可以相同，也可以不同
//

//这是一个错误的示范
//数组传参实际上传递的是数组首元素的地址
//而不是整个数组
//所以在函数内部计算一个函数参数部分的数组的元素个数是不靠谱的
//int binary_search(int arr[], int k)//形参arr看上去是数组，本质是指针变量
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//err
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//找到了返回下标
//		}
//	}
//
//	return -1;//找不到
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9 
//	int k = 7;
//
//	//找到了，返回下标
//	//找不到，返回-1
//
//	int ret = binary_search(arr, k);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//
//	return 0;
//}
//
//
//void test(int m)
//{
//
//}
//int main()
//{
//	int n = 10;
//	test(n);
//}

//布尔类型
#include <stdbool.h>
//
//bool is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	//printf("%d\n", sizeof(bool));
//
//	return 0;
//}
//

//写一个函数，每调用一次这个函数，就会将 num 的值增加1。

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//	Add(&num);
//	printf("%d\n", num);//4
//	return 0;
//}
//
//int Add(int n)
//{
//	return ++n;
//}
//
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d\n", num);//1
//	num = Add(num);
//	printf("%d\n", num);//2
//	num = Add(num);
//	printf("%d\n", num);//3
//	num = Add(num);
//	printf("%d\n", num);//4
//	return 0;
//}
//

//int Add(int x, int y)
//{
//	return x + y;
//	
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//
//	return 0;
//}


//链式访问
#include <string.h>

//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//
//	////链式访问
//	//printf("%d\n", strlen("abcdef"));
//
//	//printf("%d", printf("%d", printf("%d", 43)));
//
//	int n = test();
//
//	return 0;
//}
//

//函数不写返回值的时候，默认返回类型是int
//Add(int x, int y)//不推荐
//{
//	return x + y;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}


//int Add(int x, int y)//不推荐
//{
//	printf("hehe\n");
//}
////
////上面的代码在一些编译器上返回的是函数中执行过程中最后一条指令执行的结果
////
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}
//
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test(100);//不推荐的
//	test();
//
//
//	return 0;
//}


//void test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test(100);//不推荐的
//	test();
//
//
//	return 0;
//}

//
//明确的说明，main函数不需要参数
//
//本质上main函数是有参数的
//
//int main(void)
//{
//
//	return 0;
//}

//main函数有3个参数
//int main(int argc, char* argv[], char *envp[])
//{
//
//	return 0;
//}
//

