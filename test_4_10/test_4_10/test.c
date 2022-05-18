#define _CRT_SECURE_NO_WARNINGS

//typedef unsigned int uint;
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;
//	struct Node n;
//	Node n2;
//
//	return 0;
//}


//static
//1. 修饰局部变量
//2. 修饰全局变量
//3. 修饰函数

#include <stdio.h>
//
//void test()
//{
//  //修饰局部变量
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}


//void test()
//{
//	//执行任务
//	printf("hello world\n");
//}

//修饰全局变量

//声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}
//

//static 修饰函数

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int z  = Add(a, b);
//	printf("%d\n", z);
//
//	return 0;
//}

//
//int main()
//{
//	//寄存器变量
//	register int num = 3;//建议: 3存放在寄存中
//
//	return 0;
//}
//

//define定义标识符常量
#define NUM 100


//#define 定义宏
//宏是有参数
//
//#define ADD(x,y)  ((x)+(y))
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//printf("%d\n", NUM);
//	//int n = NUM;
//	//printf("%d\n", n);
//	//int arr[NUM] = { 0 };
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}
//
//

//int main()
//{
//	int a = 10;//向内存申请4个字节，存储10
//	//&a;//取地址操作符
//	//printf("%p\n", &a);//0x0012ff40
//	int* p = &a;
//	//p就是指针变量
//	*p = 20;//解引用操作符，意思就是通过p中存放的地址，找到p所指向的对象，*p就是p指向的对象
//
//	printf("%d\n", a);
//
//	//char ch = 'w';
//	//char * pc = &ch;
//
//	return 0;
//}
//
//
//
//int main()
//{
//	//int* p;
//	//char* p2;
//	//不管是什么类型的指针，都是在创建指针变量
//	//指针变量是用来存放地址的
//	//指针变量的大小取决于一个地址存放的时候需要大多空间
//	//32位机器上的地址：32bit位 - 4byte，所以指针变量的大小是4个字节
//	//64位机器上的地址：64bit位 - 8byte，所以指针变量的大小是8个字节
//
//	printf("%zu\n", sizeof(char*));//4
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//
//	return 0;
//}
//


//int main()
//{
//	char* pc;
//	int* p;
//
//	int *p1, *p2, *p3;
//	return 0;
//}
//
////学生
//struct Stu
//{
//	//成员
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//->
//	//结构体指针变量->成员名
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Stu s = {"zhangsan", 20, "nan", "15596668862"};
//	
//	//结构体对象.成员名
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}
//


