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
//1. ���ξֲ�����
//2. ����ȫ�ֱ���
//3. ���κ���

#include <stdio.h>
//
//void test()
//{
//  //���ξֲ�����
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
//	//ִ������
//	printf("hello world\n");
//}

//����ȫ�ֱ���

//�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}
//

//static ���κ���

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
//	//�Ĵ�������
//	register int num = 3;//����: 3����ڼĴ���
//
//	return 0;
//}
//

//define�����ʶ������
#define NUM 100


//#define �����
//�����в���
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
//	int a = 10;//���ڴ�����4���ֽڣ��洢10
//	//&a;//ȡ��ַ������
//	//printf("%p\n", &a);//0x0012ff40
//	int* p = &a;
//	//p����ָ�����
//	*p = 20;//�����ò���������˼����ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����pָ��Ķ���
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
//	//������ʲô���͵�ָ�룬�����ڴ���ָ�����
//	//ָ�������������ŵ�ַ��
//	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���ռ�
//	//32λ�����ϵĵ�ַ��32bitλ - 4byte������ָ������Ĵ�С��4���ֽ�
//	//64λ�����ϵĵ�ַ��64bitλ - 8byte������ָ������Ĵ�С��8���ֽ�
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
////ѧ��
//struct Stu
//{
//	//��Ա
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
//	//�ṹ��ָ�����->��Ա��
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Stu s = {"zhangsan", 20, "nan", "15596668862"};
//	
//	//�ṹ�����.��Ա��
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}
//


