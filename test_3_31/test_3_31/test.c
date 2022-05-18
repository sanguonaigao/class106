#define _CRT_SECURE_NO_WARNINGS

//C语言代码中一定要有main函数
//主函数

//printf是一个库函数
//专门用来打印数据的

//vs2019环境如何运行代码：
//ctrl + f5
//fn+ctrl+f5
// 
//std - 标准
//i - input
//o - output
//
#include <stdio.h>

//
//C语言规定
//main函数是程序的入口
//main函数有且仅有一个
// 
//标准的主函数的写法
//
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//
//古老的写法-不推荐
//void main()
//{
//
//}
//

//
//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//
//	return 0;
//}
//


//int main()
//{
//	int age = 20;
//	double price = 66.6;
//
//	return 0;
//}

//变量和常量的概念
//变量分为：
//局部变量 - {}内部定义的变量
//全局变量 - {}外部定义的变量
//

//int b = 20;//全局变量
//
//int main()
//{
//	//short age = 20;//年龄
//	//int high = 180;//身高
//	//float weight = 88.5;//体重
//	int a = 10;//局部变量
//
//	return 0;
//}

//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);//当全局变量和局部变量名字相同的情况下，局部优先
//
//	return 0;
//}

//但是建议不要将全局和局部变量的名字写成一样的


//写一个代码，计算2个整数的和
//scanf 是一个输入函数
//printf是一个输出函数

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//初始化
//
//	//输入2个整数
//	scanf("%d %d", &num1, &num2);
//	
//	//求和
//	int sum = num1 + num2;
//	
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}



//变量的作用域
//1. 局部变量
// 局部变量的作用域是变量所在的局部范围
//2. 全局变量
// 全局变量的作用域是整个工程。
// 
//

//
//变量生命周期
//局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束
//全局变量的生命周期是：整个程序的生命周期
//
//
//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//
//	printf("%d\n", a);
//	return 0;
//}

//声明来自外部的符号
//extern int a;
//
//void test()
//{
//	printf("test-->%d\n", a);
//}
//
//int main()
//{
//	test();
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//
//	return 0;
//}
//
//







