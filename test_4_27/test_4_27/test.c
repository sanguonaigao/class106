#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//
//
//int main()
//{
//    int ret = Fun(2);
//    printf("%d\n", ret);
//
//    return 0;
//}
//

//reverse_string(char * string)

//�ַ������򣨵ݹ�ʵ�֣�

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}

//void reverse(char* str)
//{
//	char tmp = *str;//1
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//2
//	*(str+len - 1) = '\0';//3
//	if(my_strlen(str+1)>=2)
//		reverse(str+1);//4
//	*(str + len - 1) = tmp;
//}

//int main()
//{
//	char arr[] = "abcdefg";//[a b c d e f \0]
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}


//��������Ǵ���һ��Ǳ�����⣬����ַ���������ż����ʱ�򣬻��������
//void reverse(char arr[], int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//
//	if(left<right)
//		reverse(arr, left+1, right-1);
//}


//�����İ汾��
//void reverse(char arr[], int left, int right)
//{
//	//������������Ž����͵ݹ�
//	if (left < right)
//	{ 
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		reverse(arr, left + 1, right - 1);
//	}
//}

//int main()
//{
//	char arr[] = "abcdefg";//[a b c d e f \0]
//	int left = 0;
//	int right = my_strlen(arr)-1;
//	reverse(arr, left, right);
//
//	printf("%s\n", arr);
//
//	return 0;
//}


//
//void reverse(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";//[a b c d e f \0]
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int right = sz-2;
//
//	reverse(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}
//

//int DigitSum(unsigned int n)//1234
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//
//	return 0;
//}

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��

//Pow(n, k) -> n*Pow(n, k-1)
// 
//k=0, 1
//k>0, Pow(n, k) -> n*Pow(n, k-1)
//k<0, 1/(Pow(n, -k));

//
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	
//	printf("%lf\n", ret);
//
//	return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//	//���ű��ʽ
//	//
//	int arr[] = { 1,2,(3,4),5 };//1 2 4 5
//
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//int main()
//{
//	int num = 10;//
//	int arr[10] = {0};
//	printf("%d\n", sizeof(arr));//
//	printf("%d\n", sizeof(int [10]));//
//
//	return 0;
//}
//

#include <stdio.h>

//sizeof
//sizeof��һ��������
//�������������(����)��ռ�ڴ�ռ�Ĵ�С������ע�ڴ��д�ŵľ�������
//��λ���ֽ�
//
//strlen
//strlen��һ���⺯������ר�����ַ������ȵģ�ֻ������ַ���
//�Ӳ��������ĵ�ַ���һֱ��\0,ͳ��\0֮ǰ���ֵ��ַ��ĸ���
//
//int main()
//{
//	char str[] = "hello bit";
//	//[h e l l o _ b i t \0]
//	//
//	printf("%d %d\n", sizeof(str), strlen(str));
//	//10 9
//	return 0;
//}

//������A�е����ݺ�����B�е����ݽ��н�����������һ����

//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//	//����һ�������ʾ��
//	//int tmp[] = { 0 };
//	//
//	//tmp = arr1;
//	//arr1 = arr2;
//	//arr2 = tmp;
//
//
//	return 0;
//}


//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);//1 2 3 4 5 6 7 8 9 0
//	reverse(arr, sz);
//	print(arr, sz);//0 9 8 7 6 5 4 3 2 1 
//	init(arr, sz);
//	print(arr, sz);//0 0 0 0 0 0 0 0 0 0 
//
//	return 0;
//}
//
//
//
//#include <stdio.h>
//
//int main()
//{
//	//int arr[10] = {0};
//	//֧�ֱ䳤����ı������ϣ�����Ĵ�С�����Ǳ���
//
//	int n = 0;
//	scanf("%d", &n);//5 10
//	int arr[n];     //������鲻�ܳ�ʼ��
//	int i = 0;
//	//����
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//���
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//











