#define _CRT_SECURE_NO_WARNINGS

//C���Դ�����һ��Ҫ��main����
//������

//printf��һ���⺯��
//ר��������ӡ���ݵ�

//vs2019����������д��룺
//ctrl + f5
//fn+ctrl+f5
// 
//std - ��׼
//i - input
//o - output
//
#include <stdio.h>

//
//C���Թ涨
//main�����ǳ�������
//main�������ҽ���һ��
// 
//��׼����������д��
//
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//
//���ϵ�д��-���Ƽ�
//void main()
//{
//
//}
//

//
//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//
//	return 0;
//}
//


//int main()
//{
//	int age = 20;
//	double price = 66.6;
//
//	return 0;
//}

//�����ͳ����ĸ���
//������Ϊ��
//�ֲ����� - {}�ڲ�����ı���
//ȫ�ֱ��� - {}�ⲿ����ı���
//

//int b = 20;//ȫ�ֱ���
//
//int main()
//{
//	//short age = 20;//����
//	//int high = 180;//���
//	//float weight = 88.5;//����
//	int a = 10;//�ֲ�����
//
//	return 0;
//}

//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);//��ȫ�ֱ����;ֲ�����������ͬ������£��ֲ�����
//
//	return 0;
//}

//���ǽ��鲻Ҫ��ȫ�ֺ;ֲ�����������д��һ����


//дһ�����룬����2�������ĺ�
//scanf ��һ�����뺯��
//printf��һ���������

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//��ʼ��
//
//	//����2������
//	scanf("%d %d", &num1, &num2);
//	
//	//���
//	int sum = num1 + num2;
//	
//	//���
//	printf("%d\n", sum);
//
//	return 0;
//}



//������������
//1. �ֲ�����
// �ֲ��������������Ǳ������ڵľֲ���Χ
//2. ȫ�ֱ���
// ȫ�ֱ��������������������̡�
// 
//

//
//������������
//�ֲ����������������ǣ������������������ڿ�ʼ�����������������ڽ���
//ȫ�ֱ��������������ǣ������������������
//
//
//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//
//	printf("%d\n", a);
//	return 0;
//}

//���������ⲿ�ķ���
//extern int a;
//
//void test()
//{
//	printf("test-->%d\n", a);
//}
//
//int main()
//{
//	test();
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//
//	return 0;
//}
//
//







