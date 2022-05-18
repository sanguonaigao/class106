#define _CRT_SECURE_NO_WARNINGS

//二级指针
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一个指针变量，一级指针变量
//	int** ppa = &pa;//ppa是一个二级指针变量
//
//	**ppa = 20;
//
//	//*pa = 20;
//	printf("%d\n", a);
//
//	return 0;
//}

//
//指针数组
//存放指针的数组就是指针数组
//
//
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//
//	//int arr[10];
//
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//
//	////parr就是存放指针的数组
//	////指针数组
//	//int* parr[10] = {&a, &b, &c};
//
//	//int i = 0;
//	//for (i = 0; i < 3; i++)//0 1 2
//	//{
//	//	printf("%d ", *(parr[i]));
//	//}
//
//
//	//int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	////1 2 3 4
//	////2 3 4 5
//	////3 4 5 6
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//
//	int* parr[3] = {arr1, arr2, arr3};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//人
//声明的结构体类型struct Peo


//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];//女 男 保密
//	int high;
//}p1, p2;//p1和p2是两个全局的结构体变量

//
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];//女 男 保密
//	int high;
//}p3, p4;
//
//struct Peo p5, p6;
//
//struct St
//{
//	struct Peo p;
//	int num;
//	float f;
//};
//
//void print2(struct Peo* sp)
//{
//	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);//结构体指针->成员变量
//}
//
//void print1(struct Peo p)
//{
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//结构体变量.成员变量
//}
//
//int main()
//{
//	struct Peo p1 = {"张三", "15596668862", "男", 181};//结构体变量的创建
//	struct St s = { {"lisi", "15596668888", "女", 166}, 100, 3.14f};
//
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);
//
//	print1(p1);
//	print2(&p1);
//
//	return 0;
//}

//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];//女 男 保密
//	int high;
//};
//
//struct St
//{
//	struct Peo p;
//	int num;
//	float f;
//};



//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//
//	a = 5;
//	c = ++a;//c=6 a=6 
//	b = ++c, c++, ++a, a++;//c=8 b=7 a=8
//	b += a++ + c;//a=9 b=23
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	//9 23 8
//	return 0;
//}
//

//写一个函数返回参数二进制中 1 的个数。

//int count_num_of_1(int n)
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//-1
//10000000000000000000000000000001
//11111111111111111111111111111110
//11111111111111111111111111111111
//

//int count_num_of_1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}


//n = 15
//n = n&(n-1)
//1111 n
//1110 n-1
//1110 n
//1101 n-1
//1100 n
//1011 n-1
//1000 n
//0111 n-1
//0000 n

//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//如果要判断一个数是不是2的n次方
//
//2^1
//10
//2^2
//100
//2^3
//1000
//

//if ((n & (n - 1)) == 0)
//{
//
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//
//	return 0;
//}

//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 

//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	//^ 异或操作符
//	//相同为0，相异为1
//	int ret = m ^ n;
//	//统计一下ret中二进制位有几个1
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);
//
//	return 0;
//}
//


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//10
//00000000000000000000000000001010
//
//C + STL（标准模板库）
//JAVA
//
//
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	
//	//获取奇数位的数字
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//
//	//获取偶数位的数字
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}

#include <stdio.h>
//全局变量，静态变量都是放在静态区
//全局变量，静态变量不初始化的时候，默认会被初始化为0
//局部变量，是放在栈区，不初始化，默认值是随机值
//

//int i;//0
//int main()
//{
//    i--;//-1
//    //sizeof这个操作符计算返回的结果是size_t类型的，是无符号整型的
//    //
//    if (i > sizeof(i))//-1 > 4
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");//
//    }
//    return 0;
//}

//-1
//10000000000000000000000000000001
//11111111111111111111111111111110
//11111111111111111111111111111111

//算术转换

//*   *
// * *
//  *
// * *
//*   *

#include <stdio.h>

int main()
{
    int n = 0;
    while (scanf("%d", &n) == 1)
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == j)
                    printf("*");
                else if (i + j == n - 1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}

#include <stdio.h>

int is_leap_year(int y)
{
    return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
}

int main()
{
    int y = 0;
    int m = 0;
    int d = 0;
    int days[13] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
    //                 1  2  3  ....
    //0表示假
    //非0表示真
    //逻辑操作符 && || ! 的结果如果是真就是1，如果是假就是0
    //
    while (scanf("%d %d", &y, &m) == 2)
    {
        int d = days[m];
        if ((is_leap_year(y) == 1) && (m == 2))
        {
            d++;
        }
        printf("%d\n", d);
    }

    return 0;
}















