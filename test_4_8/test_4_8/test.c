#define _CRT_SECURE_NO_WARNINGS

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	return 0;
//}

//#include <stdio.h>
//int num = 10;
//
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    //1
//    return 0;
//}
//

#include <stdio.h>
/*
int main()
{
    printf("     **\n");
    printf("     **\n");
    printf("************\n");
    printf("************\n");
    printf("    *  *\n");
    printf("    *  *\n");

    return 0;
}
*/
//
//int main()
//{
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *   \n");
//
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    int a = 40;
//    int c = 212;
//    int r = (-8 + 22) * a - 10 + c / 2;
//    printf("%d\n", r);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    printf("I lost my cellphone!\n");
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man\n");
//
//    return 0;
//}
//


//
//0 - 数字0
//'0' - 字符0 - ASCII值是48
//'\0' - 字符 - ASCII值是0
//EOF - end of file 文件的结束标志 值是-1
//


//
//int main()
//{
//    int arr[10];//10 个元素
//    int arr2[] = { 10 };//arr2数组有1个元素
//
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    //printf("%d\n", strlen("c:\test\121"));
//    //int arr[] = {};//??????
//
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char arr[8] = { 'b', 'i', 't' };
//    //不完全初始化，剩余的部分默认初始化为0
//    // 
//    //[b i t][     ?       ]
//    printf("%d\n", strlen(arr));//随机值
//    return 0;
//}
//

//int main()
//{
//   // int arr[10] = { 1 };
//    int n = 10; 
//    int arr[n];
//    //C99标准之前，数组的大小都是用常量或者常量表达式来指定
//    int arr2[10] = {0};//ok
//    int arr3[4 + 6] = {1,2,3,4};//ok
//
//    //C99标准之后，支持了变长数组，这个时候允许数组的大小是变量，但是这种指定方式的数组是不能初始化的。
//    int m = 100;
//    int arr4[m];
//
//    return 0;
//}

//VS对C99中的一些语法支持不是很好，不支持变长数组的

//int main()
//{
//    char arr[10] = "hello bit";
//    return 0;
//}
//
//int Max(int x, int y)
//{
//    if (x > y)
//        return x;
//    else
//        return y;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    //求2个整数的较大值
//    int r = Max(a, b);
//    printf("%d\n", r);
//
//    return 0;
//}
//



//#include <stdio.h>
//
//int main()
//{
//    //输入
//    int x = 0;
//    int y = 0;
//    scanf("%d", &x);
//    //计算
//    if (x > 0)
//        y = -1;
//    else if (x == 0)
//        y = 0;
//    else
//        y = 1;
//
//    //输出
//    printf("%d\n", y);
//
//    return 0;
//}
//

//int main()
//{
//    //int a = 7 / 2;
//    //int b = 7 % 2;//取模
//    //printf("%d\n", a);
//    //printf("%d\n", b);
//    // / 除号的两端都是整数的时候，执行的是整数除法，如果两端只要有一个浮点数就执行浮点数的除法
//    float a = 7.0 / 2.0;
//    int b = 7 % 2;//取模
//    //取模操作符的两个操作符只能是整数
//
//    printf("%.2f\n", a);
//    printf("%d\n", b);
//
//
//    return 0;
//}

//int main()
//{
//    int a = 0;//初始化
//    a = 20;//赋值
//
//    a = a + 3;//a=23
//    a += 3;
//
//    a -= 3;
//    a = a - 3;
//
//
//    return 0;
//}
//


//C语言中
//0表示假
//非0表示真
//
//
//int main()
//{
// /*   int flag = 2;
//    if (!flag)
//    {
//        printf("hehe\n");
//    }*/
//
//  /*  int a = -10;
//    int b = +a;
//    printf("%d\n", b);*/
//
//
//    //sizeof是操作符，是单目操作符
//
//    //int a = 10;
//    //printf("%d\n", sizeof(a));//4
//    //printf("%d\n", sizeof(int));//4
//    //printf("%d\n", sizeof a);//4
//
//    //int arr[10] = { 0 };
//    //printf("%d\n", sizeof(arr));//40 计算的是整个数组的大小，单位是字节
//    //printf("%d\n", sizeof(arr[0]));//
//    //printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10 - 数组的元素个数
//
//    //int a = 10;
//    //int b = a++;//后置++，先使用，后++
//    //int b = a; a=a+1;
//
//    //int b = ++a;//前置++，前++，后使用
//    //a=a+1;b=a;
//
//    //int a = 10;
//    ////int b = a--;
//    ////b=a; a=a-1;
//    //int b = --a;
//    ////a = a - 1; b = a;
//    //printf("%d\n", b);// 9
//    //printf("%d\n", a);// 9
//
//    //int a = (int)3.14;
//    //int a = int(3.14);//err
//    //printf("%d\n", a);
//
//    //3.14 字面浮点数，编译器默认理解为double类型
//
//    return 0;
//}
//


//
//int main()
//{
//    int a = 10;
//    if (a == 3)
//    {
//        printf("hehe\n");
//    }
//
//    return 0;
//}
//

//
//int main()
//{
//    //&& 逻辑与 - 并且
//    //|| 逻辑或 - 或者
//
//    /*int a = 0;
//    int b = 0;
//    if (a && b)
//    {
//        printf("hehe\n");
//    }*/
//
//    //int a = 0;
//    //int b = 0;
//
//    //if (a || b)
//    //{
//    //    printf("hehe\n");
//    //}
//
//    int a = 10;
//    int b = 20;
//
//    int r = (a > b ? a : b);
//
//    return 0;
//}


//逗号表达式就是逗号隔开的一串表达式
//逗号表达式的特点是：从左向右依次计算，整个表达式的结果是最后一个表达式的结果

//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = 0;
//    //       c=8    a=28   5
//    int d = (c=a-2, a=b+c, c-3);
//    printf("%d\n", d);
//
//    return 0;
//}

//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int n = 3;
//    arr[n] = 20;//[]就是下标引用操作符  arr和3就是[]的操作数
//
//    //a+b 
//    return 0;
//}


////函数调用操作符()
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//    int sum = Add(2, 3);//()就是函数调用操作符，Add,2,3都是()的操作数
//
//    return 0;
//}
//

int main()
{
    int a = 10;//自动变量

    return 0;
}


