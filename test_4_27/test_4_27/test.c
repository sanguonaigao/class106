#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//
//
//int main()
//{
//    int ret = Fun(2);
//    printf("%d\n", ret);
//
//    return 0;
//}
//

//reverse_string(char * string)

//字符串逆序（递归实现）

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}

//void reverse(char* str)
//{
//	char tmp = *str;//1
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//2
//	*(str+len - 1) = '\0';//3
//	if(my_strlen(str+1)>=2)
//		reverse(str+1);//4
//	*(str + len - 1) = tmp;
//}

//int main()
//{
//	char arr[] = "abcdefg";//[a b c d e f \0]
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}


//这个代码是存在一定潜在问题，如果字符串长度是偶数的时候，会出现问题
//void reverse(char arr[], int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//
//	if(left<right)
//		reverse(arr, left+1, right-1);
//}


//改正的版本：
//void reverse(char arr[], int left, int right)
//{
//	//满足这个条件才交换和递归
//	if (left < right)
//	{ 
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		reverse(arr, left + 1, right - 1);
//	}
//}

//int main()
//{
//	char arr[] = "abcdefg";//[a b c d e f \0]
//	int left = 0;
//	int right = my_strlen(arr)-1;
//	reverse(arr, left, right);
//
//	printf("%s\n", arr);
//
//	return 0;
//}


//
//void reverse(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";//[a b c d e f \0]
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int right = sz-2;
//
//	reverse(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}
//

//int DigitSum(unsigned int n)//1234
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//
//	return 0;
//}

//编写一个函数实现n的k次方，使用递归实现

//Pow(n, k) -> n*Pow(n, k-1)
// 
//k=0, 1
//k>0, Pow(n, k) -> n*Pow(n, k-1)
//k<0, 1/(Pow(n, -k));

//
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	
//	printf("%lf\n", ret);
//
//	return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//	//逗号表达式
//	//
//	int arr[] = { 1,2,(3,4),5 };//1 2 4 5
//
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//int main()
//{
//	int num = 10;//
//	int arr[10] = {0};
//	printf("%d\n", sizeof(arr));//
//	printf("%d\n", sizeof(int [10]));//
//
//	return 0;
//}
//

#include <stdio.h>

//sizeof
//sizeof是一个操作符
//是用来计算变量(类型)所占内存空间的大小，不关注内存中存放的具体内容
//单位是字节
//
//strlen
//strlen是一个库函数，是专门求字符串长度的，只能针对字符串
//从参数给定的地址向后一直找\0,统计\0之前出现的字符的个数
//
//int main()
//{
//	char str[] = "hello bit";
//	//[h e l l o _ b i t \0]
//	//
//	printf("%d %d\n", sizeof(str), strlen(str));
//	//10 9
//	return 0;
//}

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//	//这是一个错误的示范
//	//int tmp[] = { 0 };
//	//
//	//tmp = arr1;
//	//arr1 = arr2;
//	//arr2 = tmp;
//
//
//	return 0;
//}


//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);//1 2 3 4 5 6 7 8 9 0
//	reverse(arr, sz);
//	print(arr, sz);//0 9 8 7 6 5 4 3 2 1 
//	init(arr, sz);
//	print(arr, sz);//0 0 0 0 0 0 0 0 0 0 
//
//	return 0;
//}
//
//
//
//#include <stdio.h>
//
//int main()
//{
//	//int arr[10] = {0};
//	//支持变长数组的编译器上，数组的大小可以是变量
//
//	int n = 0;
//	scanf("%d", &n);//5 10
//	int arr[n];     //这个数组不能初始化
//	int i = 0;
//	//输入
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//输出
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//











