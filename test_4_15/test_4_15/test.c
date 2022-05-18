#define _CRT_SECURE_NO_WARNINGS

//'a';//97
#include <stdio.h>

//
//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", 97);
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//    int i = 0;
//    //sizeof(arr) - 计算的是数组的总大小，单位是字节
//    //sizeof(arr[0])-计算的是数组元素的大小
//
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    while (i < sz)
//    {
//        printf("%c", arr[i]);
//        i++;
//    }
//
//    return 0;
//}
//
//
////19980125
//
//#include <stdio.h>
//
//int main()
//{
//    //输入数据
//    int year = 0;
//    int month = 0;
//    int date = 0;
//    scanf("%4d%2d%2d", &year, &month, &date);
//
//    //输出
//    printf("year=%d\n", year);
//    printf("month=%02d\n", month);
//    printf("date=%02d\n", date);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int id = 0;
//    float c = 0.0f;
//    float math = 0.0f;
//    float eng = 0.0f;
//
//    //输入
//    scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//    //输出
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, c, math, eng);
//
//    return 0;
//}
//

#include <stdio.h>

//int main()
//{
//    int n = printf("Hello world!");
//    printf("\n%d\n", n);
//    return 0;
//}

#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}
//
//#include <stdio.h>
//
//int main()
//{
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello world!\" << endl;\n");
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int arr[4] = { 0 };
//    //0 1 2 3
//    int i = 0;
//    while (i < 4)
//    {
//        scanf("%d", &arr[i]);
//        i++;
//    }
//    //找最大值
//    //假设第一个元素就是最大值
//    int max = arr[0];
//    i = 1;
//    while (i < 4)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//        i++;
//    }
//    printf("%d\n", max);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int i = 1;
//    int n = 0;
//    int max = 0;
//    //假设第一个元素就是最大值
//    scanf("%d", &max);
//    while (i < 4)
//    {
//        scanf("%d", &n);
//        if (n > max)
//            max = n;
//        i++;
//    }
//    printf("%d\n", max);
//
//    return 0;
//}
//


//
//int main()
//{
//	int a = 0;
//	float f = 0.0f;
//	//0.0默认是double类型
//	//3.14
//	a++;
//	printf("%d\n", a);
//
//	return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    double r = 0.0;
//    double v = 0.0;
//
//    scanf("%lf", &r);
//    v = 4 / 3.0 * 3.1415926 * r * r * r;
//
//    printf("%.3lf\n", v);
//
//    return 0;
//}

#include <stdio.h>
//
//int main()
//{
//    int weight = 0;
//    int high = 0;
//    scanf("%d %d", &weight, &high);
//
//    //计算
//    float bmi = weight / (high / 100.0) / (high / 100.0);
//    //输出
//    printf("%.2f\n", bmi);
//
//    return 0;
//}



//int main()
//{
//	int i = 1;//初始化
//	while (i<=10)//判断
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;//调整
//	}
//
//	return 0;
//}


//打印1~10

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i = 12;
//	}
//	
//	return 0;
//}
//
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	////0~9
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	//int i = 0;
//	//for (i = 100; i <= 200; i++)
//	//{
//	//}
//
//	//for循环的判断部分省略意味这判断会恒成立
//	//for (;;)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	//int i = 0;
//	//int j = 0;
//
//	//for (i=0; i < 3; i++)
//	//{
//	//	for (i=0; j < 3; j++)
//	//	{
//	//		printf("hehe\n");
//	//	}
//	//}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//
//	do 
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}	
//	while (i <= 10);
//
//	return 0;
//}

//计算 n的阶乘
//1*2*3...*n
//
//5*4*3*2*1
//
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//计算 1!+2!+3!+……+10!

//
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1!+2!+3!
//	//1+2+6 = 9
//	//1
//	//1*2
//	//1*2*3
//	//1*2*3*4
//	//for (n=1; n<=10; n++)
//	//{
//	//	ret = 1;
//	//	for (i = 1; i <= n; i++)
//	//	{
//	//		ret = ret * i;
//	//	}
//	//	sum = sum + ret;
//	//}
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	
//	printf("%d\n", sum);
//
//	return 0;
//}
//

//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//
//	//在一个有序数组中查找具体的某个数字n
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}

//鞋
//不超过300，你猜
//1，2，3，4，....  err
//1-150 225 ...




int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 17;

	//在一个有序数组中查找具体的某个数字n
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	int left = 0;
	int right = sz - 1;

	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}

	return 0;
}