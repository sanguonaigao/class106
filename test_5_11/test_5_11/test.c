#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	int a = 10;//a�����ͱ�����ռ��4���ֽڵ��ڴ�ռ�
//	int* pa = &a;
//
//	//pa��һ��ָ�������������ŵ�ַ��
//
//	//pa
//
//
//	//������ָ����ǵ�ַ
//	//������˵��ָ�룬��ʵ��ָ�������ָ���������һ��������ָ�������������ŵ�ַ��һ������
//
//	return 0;
//}

//X86 - 32λ�Ļ���
//X64 - 64λ�Ļ���

//int main()
//{
//	char* pc = NULL;
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//
//	//ptr_t pt = NULL;
//
//	//sizeof ���ص�ֵ���������޷�������  unsigned int
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(ps));
//	printf("%zu\n", sizeof(pi));
//	printf("%zu\n", sizeof(pd));
//
//	return 0;
//}

//ָ�����͵�����

//0 1 2 3 4 5 6 7 8 9 a b c d e f
//0
//1
//10
//11
//100
//1010
//1111
//


//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	
//	char* pc = (char*)&a;//int*
//	*pc = 0;
//
//	//���ۣ�
//	//ָ�����;�����ָ���ڱ������õ�ʱ����ʼ����ֽ�
//	//�����int*��ָ�룬�����÷���4���ֽ�
//	//�����char*��ָ�룬�����÷���1���ֽ�
//	//�ƹ㵽��������
//	//
//	return 0;
//}
//
//int main()
//{
//	int a = 0x11223344;
//	int*  pa = &a;
//	char* pc = (char*)&a;
//
//	printf("pa = %p\n", pa);
//	printf("pa+1 = %p\n", pa+1);
//
//	printf("pc = %p\n", pc);
//	printf("pc+1 = %p\n", pc+1);
//
//	//����2��
//	//ָ������;�����ָ��+-1������ʱ�����������ֽ�
//	//������ָ��Ĳ���
//
//	//100 - 10����
//	//0x64 - 16����
//	//110 0100 - 2����
//	//144 - 8����
//	return 0;
//}
//


//int main()
//{
//	int a = 0;
//
//	int* pi = &a;//pi �����÷���4���ֽڣ�pi+1Ҳ������4���ֽ�
//	float* pf = &a;//pf �����÷���4���ֽڣ�pf+1Ҳ������4���ֽ�
//	//int* �� float* �ǲ��ǾͿ���ͨ�ð���
//	//����
//	//*pi = 100;
//	*pf = 100.0;
//
//	return 0;
//}

//
//int main()
//{
//	int a = 0x11223344;
//	int b = 287454020;
//
//	return 0;
//}
//

//
//int main()
//{
//	int* p;
//	//pû�г�ʼ��������ζ��û����ȷ��ָ��
//	//һ���ֲ���������ʼ���Ļ����ŵ������ֵ��0xcccccccc
//	//
//	*p = 10;//�Ƿ������ڴ��ˣ������p����Ұָ��
//
//	return 0;
//}
//



//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//&arr[0]
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	return 0;
//}



//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int*p = test();
//	printf("haha\n");
//	printf("abcdef\n");
//
//	if (p != NULL)
//	{
//		printf("%d\n", *p);//
//	}
//	return 0;
//}


//int main()
//{
//	//int b = 0;
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//NULL -> 0
//
//	//int* p2 = NULL;
//	//*p2 = 100;//err
//
//	int* p3 = NULL;
//
//	if (p3 != NULL)
//	{
//		*p3 = 100;//ok
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�����±��д��
//	//for (i = 0; i < sz; i++)
//	//{
//	//	arr[i] = 1;
//	//}
//
//	/*int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*p = 1;
//		p++;
//	}*/
//
//	//int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	*(p + i) = 1;
//	//}
//
//	return 0;
//}


//int main()
//{
//	//int arr[10] = { 0 };
//	//printf("%d\n", &arr[0] - &arr[9]);//?
//	// 
//	// 
//	//int arr[10] = { 0 };
//	//char ch[5] = {0};
//	//printf("%d\n", &ch[0] - &arr[5]);//err
//
//
//	return 0;
//}

#include <string.h>

//1
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//2. �ݹ�İ汾

//3. ָ��-ָ��
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}

//���飺һ����ͬ����Ԫ�صļ���
//ָ���������һ����������ŵ��ǵ�ַ

//int main()
//{
//	int arr[10] = {0};
//	//arr ����Ԫ�صĵ�ַ
//	//&arr[0]
//	int* p = arr;
//	//ͨ��ָ������������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p ----- %p\n", &arr[i], p + i);
//	}
//
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//	return 0;
//}


//void test(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}

//void test(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//arr[i]--> *(arr+i)
//	}
//}
//
//int main()
//{
//	int arr[10] = {0};
//	test(arr, 10);
//
//	return 0;
//}
