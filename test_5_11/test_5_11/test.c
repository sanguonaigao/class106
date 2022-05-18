#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	int a = 10;//a是整型变量，占用4个字节的内存空间
//	int* pa = &a;
//
//	//pa是一个指针变量，用来存放地址的
//
//	//pa
//
//
//	//本质上指针就是地址
//	//口语中说的指针，其实是指针变量，指针变量就是一个变量，指针变量是用来存放地址的一个变量
//
//	return 0;
//}

//X86 - 32位的环境
//X64 - 64位的环境

//int main()
//{
//	char* pc = NULL;
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//
//	//ptr_t pt = NULL;
//
//	//sizeof 返回的值的类型是无符号整型  unsigned int
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(ps));
//	printf("%zu\n", sizeof(pi));
//	printf("%zu\n", sizeof(pd));
//
//	return 0;
//}

//指针类型的意义

//0 1 2 3 4 5 6 7 8 9 a b c d e f
//0
//1
//10
//11
//100
//1010
//1111
//


//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	
//	char* pc = (char*)&a;//int*
//	*pc = 0;
//
//	//结论：
//	//指针类型决定了指针在被解引用的时候访问几个字节
//	//如果是int*的指针，解引用访问4个字节
//	//如果是char*的指针，解引用访问1个字节
//	//推广到其他类型
//	//
//	return 0;
//}
//
//int main()
//{
//	int a = 0x11223344;
//	int*  pa = &a;
//	char* pc = (char*)&a;
//
//	printf("pa = %p\n", pa);
//	printf("pa+1 = %p\n", pa+1);
//
//	printf("pc = %p\n", pc);
//	printf("pc+1 = %p\n", pc+1);
//
//	//结论2：
//	//指针的类型决定了指针+-1操作的时候，跳过几个字节
//	//决定了指针的步长
//
//	//100 - 10进制
//	//0x64 - 16进制
//	//110 0100 - 2进制
//	//144 - 8进制
//	return 0;
//}
//


//int main()
//{
//	int a = 0;
//
//	int* pi = &a;//pi 解引用访问4个字节，pi+1也是跳过4个字节
//	float* pf = &a;//pf 解引用访问4个字节，pf+1也是跳过4个字节
//	//int* 和 float* 是不是就可以通用啊？
//	//不能
//	//*pi = 100;
//	*pf = 100.0;
//
//	return 0;
//}

//
//int main()
//{
//	int a = 0x11223344;
//	int b = 287454020;
//
//	return 0;
//}
//

//
//int main()
//{
//	int* p;
//	//p没有初始化，就意味着没有明确的指向
//	//一个局部变量不初始化的化，放的是随机值：0xcccccccc
//	//
//	*p = 10;//非法访问内存了，这里的p就是野指针
//
//	return 0;
//}
//



//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//&arr[0]
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	return 0;
//}



//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int*p = test();
//	printf("haha\n");
//	printf("abcdef\n");
//
//	if (p != NULL)
//	{
//		printf("%d\n", *p);//
//	}
//	return 0;
//}


//int main()
//{
//	//int b = 0;
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//NULL -> 0
//
//	//int* p2 = NULL;
//	//*p2 = 100;//err
//
//	int* p3 = NULL;
//
//	if (p3 != NULL)
//	{
//		*p3 = 100;//ok
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//数组下标的写法
//	//for (i = 0; i < sz; i++)
//	//{
//	//	arr[i] = 1;
//	//}
//
//	/*int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*p = 1;
//		p++;
//	}*/
//
//	//int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	*(p + i) = 1;
//	//}
//
//	return 0;
//}


//int main()
//{
//	//int arr[10] = { 0 };
//	//printf("%d\n", &arr[0] - &arr[9]);//?
//	// 
//	// 
//	//int arr[10] = { 0 };
//	//char ch[5] = {0};
//	//printf("%d\n", &ch[0] - &arr[5]);//err
//
//
//	return 0;
//}

#include <string.h>

//1
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//2. 递归的版本

//3. 指针-指针
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}

//数组：一组相同类型元素的集合
//指针变量：是一个变量，存放的是地址

//int main()
//{
//	int arr[10] = {0};
//	//arr 是首元素的地址
//	//&arr[0]
//	int* p = arr;
//	//通过指针来访问数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p ----- %p\n", &arr[i], p + i);
//	}
//
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//	return 0;
//}


//void test(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}

//void test(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//arr[i]--> *(arr+i)
//	}
//}
//
//int main()
//{
//	int arr[10] = {0};
//	test(arr, 10);
//
//	return 0;
//}
