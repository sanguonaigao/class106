#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 2+6/3;
//	int b = 2 + 3 + 4;
//	return 0;
//}
//
//int main()
//{
//	char c = -1;//-1是整数，32个比特位
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111 -> -1的补码
//	//11111111 - c
//	//11111111111111111111111111111111
//}

//int 4byte - 32bit
//char 1byte- 8bit
//
//int main()
//{
//	char a = 5;
//	//00000000000000000000000000000101
//	//00000101 - a
//	char b = 126;
//	//00000000000000000000000001111110
//	//01111110 - b
//
//	char c = a + b;
//	//00000000000000000000000000000101 - a
//	//00000000000000000000000001111110 - b
//	//00000000000000000000000010000011
//	//10000011 - c
//	//11111111111111111111111110000011 - 补码
//	//11111111111111111111111110000010
//	//10000000000000000000000001111101
//	//
//	printf("%d\n", c);//-125
//
//	return 0;
//}


//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6)
//		printf("a");
//
//	if (b == 0xb600)
//		printf("b");
//
//	if (c == 0xb6000000)
//		printf("c");
//
//	return 0;
//}
//
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//
//	return 0;
//}
//

//int main()
//{
//	3 + 2 + 4 + 5;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//
//	printf("%d\n", b);
//
//	return 0;
//}

#include <stdio.h>
//
//int fib(int n)
//{
//    if (n <= 2)
//        return n;
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//    int n = 0;
//    //输入
//    scanf("%d", &n);
//    //计算
//    int m = fib(n);
//    //输出
//    printf("%d\n", m);
//    return 0;
//}
//
//
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];//C99
//    //接收n个数字
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int del = 0;
//    //接收删除的值
//    scanf("%d", &del);
//    int j = 0;//j作为下标锁定的位置就是用来存放不删除的数据的
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != del)
//        {
//            arr[j] = arr[i];
//            j++;
//        }
//    }
//    //输出
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//
//#include <stdio.h>
///*
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    int i = 0;
//    //输入
//    for(i=0; i<n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //找出最大值
//    int max = arr[0];
//    for(i=1; i<n; i++)
//    {
//        if(arr[i]>max)
//            max = arr[i];
//    }
//    //找出最小值
//    int min = arr[0];
//    for(i=1; i<n; i++)
//    {
//        if(arr[i]<min)
//            min = arr[i];
//    }
//
//    printf("%d\n", max-min);
//
//    return 0;
//}
//*/
//
///*
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    int i = 0;
//    //输入
//    for(i=0; i<n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //找出最大值
//    //找出最小值
//
//    int max = arr[0];
//    int min = arr[0];
//
//    for(i=1; i<n; i++)
//    {
//        if(arr[i]>max)
//            max = arr[i];
//
//        if(arr[i]<min)
//            min = arr[i];
//    }
//
//    printf("%d\n", max-min);
//
//    return 0;
//}
//
//*/
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    int i = 0;
//    int max = 0;
//    int min = 100;
//
//    //输入
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] > max)
//            max = arr[i];
//        if (arr[i] < min)
//            min = arr[i];
//    }
//
//    printf("%d\n", max - min);
//
//    return 0;
//}


#
#include <stdio.h>

int main()
{
    char ch = 0;

    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
        printf("%c\n", ch - 32);
    else
        printf("%c\n", ch + 32);

    return 0;
}

#include <stdio.h>

/*
int main()
{
    char ch = 0;

    while(scanf("%c", &ch)==1)
    {
        if(ch>='a' && ch<='z')
            printf("%c\n", ch-32);
        else
            printf("%c\n", ch+32);

        getchar();//处理\n
    }


    return 0;
}
*/
/*
int main()
{
    char ch = 0;

    while(scanf("%c", &ch)==1)
    {
        if(ch>='a' && ch<='z')
            printf("%c\n", ch-32);
        else if(ch>='A' && ch<='Z')
            printf("%c\n", ch+32);
    }

    return 0;
}

*/

/*
int main()
{
    char ch = 0;
    //scanf读取成功的时候，返回的是读取的数据的个数
    //scanf函数在读取失败的时候返回EOF
    while(scanf("%c", &ch)!=EOF)
    {
        if(ch>='a' && ch<='z')
            printf("%c\n", ch-32);
        else if(ch>='A' && ch<='Z')
            printf("%c\n", ch+32);
    }

    return 0;
}

*/
#include <ctype.h>

int main()
{
    char ch = 0;
    //scanf读取成功的时候，返回的是读取的数据的个数
    //scanf函数在读取失败的时候返回EOF
    while (scanf("%c", &ch) != EOF)
    {
        if (islower(ch))
            printf("%c\n", toupper(ch));
        else if (isupper(ch))
            printf("%c\n", tolower(ch));
    }

    return 0;
}

#include <stdio.h>

/*
int main()
{
    char ch = 0;
    while(scanf("%c", &ch) ==1)
    {
        if((ch>='A' && ch<='Z') ||(ch>='a' && ch<='z'))
            printf("%c is an alphabet.\n", ch);
        else
            printf("%c is not an alphabet.\n", ch);

        getchar();//\n
    }

    return 0;
}
*/

int main()
{
    char ch = 0;
    //%c的前面加空格
    //跳过下一个字符之前的所有空白字符

    while (scanf(" %c", &ch) == 1)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            printf("%c is an alphabet.\n", ch);
        else
            printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}


int main()
{
    char ch = 0;
    //%c的前面加空格
    //跳过下一个字符之前的所有空白字符

    while (scanf(" %c", &ch) == 1)
    {
        //if((ch>='A' && ch<='Z') ||(ch>='a' && ch<='z'))
        if (isalpha(ch))
            printf("%c is an alphabet.\n", ch);
        else
            printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}


#include <stdio.h>

int main()
{
    int i = 0;
    int max = 0;
    int score = 0;

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &score);
        if (score > max)
            max = score;
    }
    printf("%d\n", max);

    return 0;
}



#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0;

    for (i = 10000; i <= 99999; i++)
    {
        //判断i是否为 Lily Number。
        int sum = 0;
        int j = 0;
        for (j = 1; j <= 4; j++)
        {
            int k = (int)pow(10, j);
            sum += (i % k) * (i / k);
        }

        if (sum == i)
            printf("%d ", i);
    }

    return 0;
}

