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
//	char c = -1;//-1��������32������λ
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111 -> -1�Ĳ���
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
//	//11111111111111111111111110000011 - ����
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
//    //����
//    scanf("%d", &n);
//    //����
//    int m = fib(n);
//    //���
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
//    //����n������
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int del = 0;
//    //����ɾ����ֵ
//    scanf("%d", &del);
//    int j = 0;//j��Ϊ�±�������λ�þ���������Ų�ɾ�������ݵ�
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != del)
//        {
//            arr[j] = arr[i];
//            j++;
//        }
//    }
//    //���
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
//    //����
//    for(i=0; i<n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //�ҳ����ֵ
//    int max = arr[0];
//    for(i=1; i<n; i++)
//    {
//        if(arr[i]>max)
//            max = arr[i];
//    }
//    //�ҳ���Сֵ
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
//    //����
//    for(i=0; i<n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //�ҳ����ֵ
//    //�ҳ���Сֵ
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
//    //����
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

        getchar();//����\n
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
    //scanf��ȡ�ɹ���ʱ�򣬷��ص��Ƕ�ȡ�����ݵĸ���
    //scanf�����ڶ�ȡʧ�ܵ�ʱ�򷵻�EOF
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
    //scanf��ȡ�ɹ���ʱ�򣬷��ص��Ƕ�ȡ�����ݵĸ���
    //scanf�����ڶ�ȡʧ�ܵ�ʱ�򷵻�EOF
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
    //%c��ǰ��ӿո�
    //������һ���ַ�֮ǰ�����пհ��ַ�

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
    //%c��ǰ��ӿո�
    //������һ���ַ�֮ǰ�����пհ��ַ�

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
        //�ж�i�Ƿ�Ϊ Lily Number��
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

