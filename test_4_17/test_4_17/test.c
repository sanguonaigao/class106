#define _CRT_SECURE_NO_WARNINGS

//��һ�����������в��Ҿ����ĳ������n��
//�۰���ң����ֲ��ң�

#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;
//
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
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//
//	return 0;
//}

//��д���룬��ʾ����ַ��������ƶ������м���

//welcome to bit!!!!
//##################
//w################!
//we##############!!
//wel############!!!
//.....
//welcome to bit!!!!

//char buf[] = "abc";
//[a b c \0]
//4
#include <windows.h>
#include <stdlib.h>

//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//
//	int left = 0;
//	int right = strlen(arr2) - 1;//int right = sizeof(arr1)/sizeof(arr1[0])-2;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//�����Ļ
//		system("cls");//system��һ���⺯��������ִ��ϵͳ����
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}
//

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
//��ʾ��¼�ɣ�������ξ�����������˳�����

//�Ƚ�2���ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��һ���⺯����strcmp
//�������ֵ��0����ʾ2���ַ������
#include <string.h>

//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//�����������ַ�����abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�����������������˳�����\n");
//	}
//
//	return 0;
//}
//


//
//1.���Բ���һ�������(1~100)
//2.������
//�´���
//��С��
//ֱ���¶��ˣ�����

//
//shopee
//ϺƤ
//
#include<stdlib.h>
#include <time.h>
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("********   1. play   ********\n");
//	printf("********   0. exit   ********\n");
//	printf("*****************************\n");
//}
//
////0~RAND_MAX(32767)
//void game()
//{
//	int guess = 0;
//	//1. ���������
//	//0~99 --> 1~100
//	int ret = rand()%100+1;//����������ĺ���
//	//printf("%d\n", ret);
//	//2. ������
//
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}

//ָ��
//int *p = NULL;
//int a = 0;
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//�����ֵ������߼�
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��!\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//
//void test()
//{
//
//}
//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
//}
//

//�ػ�����
//1. ��������������1�����ڹػ�
//2. ������룺��������ȡ���ػ�
//
//bat
//
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����60���ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����60���ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}

//
//int main()
//{
//	//char arr1[20] = { 0 };
//	//char arr2[] = "hello bit";
//
//	//strcpy(arr1, arr2);
//	//
//	//printf("%s\n", arr1);//hello bit
//
//	char arr[20] = "hello world";
//	memset(arr+6, 'y', 3);
//	printf("%s\n", arr);
//
//	return 0;
//}
//


//
////�����Ķ���
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
////void test()
////{
////	printf("hehe\n");
////}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//��ϴ�ֵ
//	//�����ĵ���
//	int m = get_max(a, b);
//	
//	printf("%d\n", m);
//
//	return 0;
//}
//
//


//дһ���������Խ����������α���������

//��ʽ����
//void Swap(int x,int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}

void Swap(int* px, int* py)
{
	int z = *px;//z=a
	*px = *py;//a=b
	*py = z;  //b=a
}
//
//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��
//
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	//����
	printf("����ǰ:a=%d b=%d\n", a, b);
	//a��b��ʵ��
	//Swap(a, b);
	Swap(&a, &b);

	printf("������:a=%d b=%d\n", a, b);

	return 0;
}


//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	a = 20;//ֱ�Ӹ�
//	*p = 30;//��Ӹ�
//
//	return 0;
//}















