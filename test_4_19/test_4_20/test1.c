#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//
//	return 0;
//}



//дһ���������Խ����������α��������ݡ�
//�β� - ��ʽ����
////void Swap(int x, int y)
////{
////	int z = 0;
////	z = x;
////	x = y;
////	y = z;
////}
//
////��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
////���βε��޸Ĳ��ܸı�ʵ��
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//void Swap2(int* px, int* py)
//{
//	int z = 0;
//	z = *px;//z = a;
//	*px = *py;//a=b;
//	*py = z;//b=z
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);//10 20
//
//	int c = Add(a, b);
//	//int c = Add(Add(a,3), b);
//	printf("%d\n", c);
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	//����
//	
//	//ʵ�� - ʵ�ʲ���
//	Swap(a, b);
//	Swap2(&a, &b);
//
//	printf("������:a=%d b=%d\n", a, b);
//
//	return 0;
//}

//
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int* px, int* py)
//{
//	int z = 0;
//	z = *px;//z = a;
//	*px = *py;//a=b;
//	*py = z;//b=z
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);//10 20
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	//ʵ�� - ʵ�ʲ���
//	//��ֵ����
//	Swap1(a, b);
//
//	//��ַ����
//	Swap2(&a, &b);
//
//	printf("������:a=%d b=%d\n", a, b);
//
//	return 0;
//}


//дһ�����������ж�һ�����ǲ���������

//��ӡ100~200֮�������
//������ֻ�ܱ�1����������������
//7
//1��7����
//2 3 4 5 6
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������ʹ�ӡ
//		//��2~i-1֮�������ȥ�Գ�i
//		int flag = 1;//flag��1����ʾ������
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

#include <math.h>

//sqrt����ѧ�⺯��
//��ƽ��
//math.h
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������ʹ�ӡ
//		//��2~i-1֮�������ȥ�Գ�i
//		int flag = 1;//flag��1����ʾ������
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


//дһ�����������ж�һ�����ǲ���������

//����������1
//������������0
//
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������ʹ�ӡ
//		//��2~i-1֮�������ȥ�Գ�i
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//

//дһ�������ж�һ���ǲ�������
//��ӡ1000~2000��֮�������
//�����жϵĹ���
//1. �ܱ�4���������Ҳ��ܱ�100����������
//2. �ܱ�400����������
//
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		if (year % 4 == 0)//2000
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//дһ�������ж�һ���ǲ�������

//�����귵��1
//�����귵��0
//
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//�ҵ��˷����±�
//		}
//	}
//
//	return -1;//�Ҳ���
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9 
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//�ҵ��ˣ������±�
//	//�Ҳ���������-1
//
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//
//	return 0;
//}

//
//��ʽ������ʵ�ʲ��������ֿ�����ͬ��Ҳ���Բ�ͬ
//

//����һ�������ʾ��
//���鴫��ʵ���ϴ��ݵ���������Ԫ�صĵ�ַ
//��������������
//�����ں����ڲ�����һ�������������ֵ������Ԫ�ظ����ǲ����׵�
//int binary_search(int arr[], int k)//�β�arr����ȥ�����飬������ָ�����
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//err
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//�ҵ��˷����±�
//		}
//	}
//
//	return -1;//�Ҳ���
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9 
//	int k = 7;
//
//	//�ҵ��ˣ������±�
//	//�Ҳ���������-1
//
//	int ret = binary_search(arr, k);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//
//	return 0;
//}
//
//
//void test(int m)
//{
//
//}
//int main()
//{
//	int n = 10;
//	test(n);
//}

//��������
#include <stdbool.h>
//
//bool is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	//printf("%d\n", sizeof(bool));
//
//	return 0;
//}
//

//дһ��������ÿ����һ������������ͻὫ num ��ֵ����1��

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//	Add(&num);
//	printf("%d\n", num);//4
//	return 0;
//}
//
//int Add(int n)
//{
//	return ++n;
//}
//
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d\n", num);//1
//	num = Add(num);
//	printf("%d\n", num);//2
//	num = Add(num);
//	printf("%d\n", num);//3
//	num = Add(num);
//	printf("%d\n", num);//4
//	return 0;
//}
//

//int Add(int x, int y)
//{
//	return x + y;
//	
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//
//	return 0;
//}


//��ʽ����
#include <string.h>

//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//
//	////��ʽ����
//	//printf("%d\n", strlen("abcdef"));
//
//	//printf("%d", printf("%d", printf("%d", 43)));
//
//	int n = test();
//
//	return 0;
//}
//

//������д����ֵ��ʱ��Ĭ�Ϸ���������int
//Add(int x, int y)//���Ƽ�
//{
//	return x + y;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}


//int Add(int x, int y)//���Ƽ�
//{
//	printf("hehe\n");
//}
////
////����Ĵ�����һЩ�������Ϸ��ص��Ǻ�����ִ�й��������һ��ָ��ִ�еĽ��
////
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}
//
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test(100);//���Ƽ���
//	test();
//
//
//	return 0;
//}


//void test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test(100);//���Ƽ���
//	test();
//
//
//	return 0;
//}

//
//��ȷ��˵����main��������Ҫ����
//
//������main�������в�����
//
//int main(void)
//{
//
//	return 0;
//}

//main������3������
//int main(int argc, char* argv[], char *envp[])
//{
//
//	return 0;
//}
//

