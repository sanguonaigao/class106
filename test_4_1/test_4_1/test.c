#define _CRT_SECURE_NO_WARNINGS

//1.���泣��
//2.const���εĳ�����
//3.define ����ı�ʶ������
//4.ö�ٳ���

#include <stdio.h>


//int main()
//{
//	//30;
//	//3.14;
//	//'w';//�ַ�
//	//"abc";
//	//const int a = 10;//��C�����У�const���ε�a�������Ǳ��������ǲ���ֱ���޸ģ��г��������ԡ�
//	//a = 20;
//	//printf("%d\n", a);//20
//
//	const int n = 10;
//	int arr[10] = {0};
//	
//
//	return 0;
//}

//#define MAX 100
//#define STR "abcdef"
//
//int main()
//{
//	//printf("%d\n", MAX);
//	//int a = MAX;
//	//printf("%d\n", a);
//	//printf("%s\n", STR);
//	//MAX = 200;//err
//
//	return 0;
//}
//

//ö�ٳ���
//enum Color
//{
//	//ö�ٳ���
//	RED,
//	GREEN,
//	BLUE
//};
//
////�Ա�
//enum Sex
//{
//	//ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//
//int main()
//{
//	//��ԭɫ
//	//Red Green Blue
//	int num = 10;
//	enum Color c = RED;
//	//RED = 20;//err
//	//MALE = 10;//err
//
//	return 0;
//}
#include <string.h>
//
//int main()
//{
//	//100 - int
//	//#qWer$
//	//char �ַ�����
//	//'a';
//	//char ch = 'w';
//	//�ַ���
//	//C��������û���ַ��������أ� - û��
//	//"abcdef";
//	char arr1[] = "abcdef";//7
//	char arr2[] = {'a','b','c','d','e','f','\0'};
//
//	printf("%d\n", strlen(arr1));//6
//	printf("%d\n", strlen(arr2));
//
//	//int len = strlen("abc");//���ַ������ȵ�һ��������string length    ͷ�ļ� string.h
//	//printf("%d\n", len);
//
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}
//


//int main()
//{
//	printf("abc\n");
//
//	return 0;
//}

//int main()
//{
//	printf("abc\0def");
//
//	return 0;
//}
//

//ת���ַ�
//����ĸ��
//??) --> ]
//??( --> [

//
//%d - ��ӡ����
//%c - ��ӡ�ַ�
//%s - ��ӡ�ַ���
//%f - ��ӡfloat���͵�����
//%lf - ��ӡdouble���͵�����
//%zu - ��ӡsizeof�ķ���ֵ
//
//int main()
//{
//	//printf("%s\n", "(are you ok\?\?)");
//	//(are you ok]
//	//printf("%c\n", '\'');
//	//printf("abcdef\n");
//	//printf("\"");
//
//	//printf("%s\n", "abcdef");
//
//	//printf("abcd\\0ef");
//
//	//printf("c:\\test\\test.c");
//	//printf("\a");
//	//printf("abc\nd\tef");
//	//printf("%c\n", '\130');
//	//printf("%c\n", '\x063');
//
//	//printf("%d\n", strlen("qwer t"));//?
//	//printf("%d\n", strlen("c:\test\628\test.c"));
//
//	return 0;
//}

//
//ע��
//
//C���Ե�ע�ͷ��
/*
int main()
{
	//int a = 10;


	int a = 10;
	int b = 20;


	//����ָ�����p������ֵΪNULL
	int* p = NULL;

	return 0;
}
*/

//int main()
//{
//	//int a = 10;
//	//C++��ע�ͷ��
//
//	return 0;
//}

//
//1. ע�Ϳ�����������
//2. �Ը��ӵĴ�����н���
//3. д�����ʱ��дע�ͣ��ǰ����Լ����������˵�
//
//

//int main()
//{
//	//��������
//	
//	//��������
//	
//	//���
//	return 0;
//}
//
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("Ҫ�ú�ѧϰ��(1/0)��");//0
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//
//	return 0;
//}


//20000����Ч����Ļ���

//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line<20000)
//	{
//		printf("д����:%d\n", line);
//		line++;
//	}
//
//	if (line >= 20000)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//
//	return 0;
//}

//��2������������

//����

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int Add(int x, int y)
//{
//	return (x + y);
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//����
//	scanf("%d %d", &n1, &n2);
//	//���
//
//	//int sum = n1 + n2;
//	int sum = Add(n1, n2);
//	int t1 = 100;
//	int t2 = 300;
//
//	int ret = Add(t1, t2);
//
//	//��ӡ
//	printf("%d\n", sum);
//
//	return 0;
//}
//


int main()
{
	//int a = 10;
	//int b = 11;
	//int c = 12;
	////0~9
	//int d = 0;
	//int e = 1;
	//....
	
	//����
	//int arr[10] = {10,11,12,13,14,15,16,17,18,19};
	//char ch[5];
	//double d[30];

	////0~9
	////printf("%d\n", arr[8]);
	//int i = 0;
	//while (i < 10)
	//{
	//	printf("%d ", arr[i]);
	//	i = i + 1;
	//}

	//printf("abc\0def");


	return 0;
}

