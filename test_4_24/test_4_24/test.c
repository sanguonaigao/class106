#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//���ﲻ���жϣ����Ǹ�ֵ��i = 5���ʽ�Ľ����5
//			printf("%d ", i);//5 5
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//	case 1:
//		printf("1\n");
//		break;
//	case 2:
//		printf("2\n");
//		break;
//	default:
//		printf("�Ǻ�\n");
//		break;
//	}
//
//	return 0;
//}

//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}

#include <stdio.h>
//
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//д���뽫�������������Ӵ�С���
//
//void Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d %d %d", &a, &b, &c);
//	//����
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	//���
//	printf("%d %d %d\n", a, b, c);//
//	return 0;
//}
//
//

//дһ�������ӡ1-100֮������3�ı���������

//int main()
//{
//	int i = 0;
//
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//
//	for (i = 3; i <= 100; i+=3)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//���������������������������Լ��

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//����
//	scanf("%d %d", &a, &b);
//	//�����Լ��
//	int min = (a < b) ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d\n", m);
//
//	return 0;
//}
//

//շת�����

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d %d", &a, &b);//18 24
//	//�����Լ��
//	while (c=a%b)
//	{
//		a = b;
//		b = c;
//	}
//
//	printf("%d\n", b);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//
//

//
//��д������һ�� 1 �� 100 �����������г��ֶ��ٸ�����9
//
//9 19 29 39 49 59 69 79 89 99
//90 91 92 93 94 95 96 97 98 99

//int main()
//{
//	int i = 0;
//	int count = 0;//����
//	for (i = 1; i <= 100; i++)
//	{
//		//�жϸ�λ�ǲ���9
//		if (i % 10 == 9)
//			count++;
//		//�ж�ʮλ�ǲ���9
//		if (i / 10 == 9)
//			count++;
//	}
//
//	printf("count = %d\n", count);
//
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//��������1
//��ĸ��1~100

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//
//	printf("%lf\n", sum);
//
//	return 0;
//}



//��10 �����������ֵ


//int main()
//{
//	//׼��10������
//	int arr[10] = { -3,-1,-5,-2,-9,-7,-8,-4,-10,-6};
//	//�ҳ����ֵ
//	int max = arr[0];
//	//
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}
//
//int main()
//{
//	//׼��10������
//	int arr[10] = {0};
//	//��������
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�ҳ����ֵ
//	int max = arr[0];
//	//
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//
//int main()
//{
//	//����һ�������ʾ��
//	//׼��10������
//	int arr[] = { 0 };
//	//int arr[1] = {0};//
//	//����û��ָ�������Ԫ�ظ������ͻ���ݳ�ʼ��������������Ԫ�صĸ���
//	
//	//��������
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�ҳ����ֵ
//	int max = arr[0];
//	//
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}


//����Ļ�����9*9�˷��ھ���
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//....
//
//
//int main()
//{
//	int i = 0;
//	//��ӡ9��
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d ", i, j, i * j);
//
//		printf("\n");
//	}
//
//	return 0;
//}
//

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	printf("%d\n", z);
//	return z;
//}
//
//
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	{
//		int num = 2022;
//	}
//	//printf("%d\n", num);//err
//	return z;
//}
//
//int Sub(int x, int y)
//{
//	int z = x - y;
//	return z;
//}
//
//int main()
//{
//
//	return 0;
//}
//
//

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d ", i, j, i * j);
//
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//
//	return 0;
//}

//
//int test()
//{
//	return (3, 4);
//}
//
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret);
//
//	return 0;
//}

//void test(int arr[])
//{
//	arr[0] = 3;
//	arr[1] = 4;
//	//3,4
//}
//
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//
//	return 0;
//}
//
//int a = 0;
//int b = 0;
//
//void test()
//{
//	a = 3;
//	b = 4;
//	//3,4
//}
//
//int main()
//{
//	test();
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}




//void test(int* px, int*py)
//{
//	*px = 3;
//	*py = 4;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//

//
//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//1~10
//	//1~100
//	//���� - һ����ͬ����Ԫ�صļ���
//
//	int arr[10];
//	char ch[5];
//	double data1[20];
//	double data2[15+5];
//
//	//����Ĵ���ֻ����֧��C99��׼�ı������ϱ���
//	int n = 10;
//	scanf("%d", &n);
//	int arr2[n];//���������ǲ��ܳ�ʼ��
//
//	//��C99��׼֮ǰ������Ĵ�С�����ǳ������߳������ʽ
//	//��C99֮������Ĵ�С�����Ǳ�����Ϊ��֧�ֱ䳤����
//
//	return 0;
//}



//int main()
//{
//	//����ȫ��ʼ����ʣ���Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	int arr[10] = { 1,2,3 };
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[] = { 1,2,3 };
//
//	char ch1[10] = { 'a', 'b', 'c' };
//	//a b c 0 0 0 0 0 0 0
//	char ch2[10] = "abc";
//	//a b c \0 0 0 0 0 0 0
//	char ch3[] = { 'a', 'b', 'c' };
//	char ch4[] = "abc";
//	return 0;
//}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//            0 1                9
	//[] - �±����ò�����
	//printf("%d\n", arr[4]);
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//10
	//��ӡ�����ÿ��Ԫ�صĵ�ַ
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}

	/*for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}*/
	/*for (i = sz - 1; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}*/
	return 0;
}





