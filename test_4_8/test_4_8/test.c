#define _CRT_SECURE_NO_WARNINGS

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	return 0;
//}

//#include <stdio.h>
//int num = 10;
//
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    //1
//    return 0;
//}
//

#include <stdio.h>
/*
int main()
{
    printf("     **\n");
    printf("     **\n");
    printf("************\n");
    printf("************\n");
    printf("    *  *\n");
    printf("    *  *\n");

    return 0;
}
*/
//
//int main()
//{
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *   \n");
//
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    int a = 40;
//    int c = 212;
//    int r = (-8 + 22) * a - 10 + c / 2;
//    printf("%d\n", r);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    printf("I lost my cellphone!\n");
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man\n");
//
//    return 0;
//}
//


//
//0 - ����0
//'0' - �ַ�0 - ASCIIֵ��48
//'\0' - �ַ� - ASCIIֵ��0
//EOF - end of file �ļ��Ľ�����־ ֵ��-1
//


//
//int main()
//{
//    int arr[10];//10 ��Ԫ��
//    int arr2[] = { 10 };//arr2������1��Ԫ��
//
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    //printf("%d\n", strlen("c:\test\121"));
//    //int arr[] = {};//??????
//
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char arr[8] = { 'b', 'i', 't' };
//    //����ȫ��ʼ����ʣ��Ĳ���Ĭ�ϳ�ʼ��Ϊ0
//    // 
//    //[b i t][     ?       ]
//    printf("%d\n", strlen(arr));//���ֵ
//    return 0;
//}
//

//int main()
//{
//   // int arr[10] = { 1 };
//    int n = 10; 
//    int arr[n];
//    //C99��׼֮ǰ������Ĵ�С�����ó������߳������ʽ��ָ��
//    int arr2[10] = {0};//ok
//    int arr3[4 + 6] = {1,2,3,4};//ok
//
//    //C99��׼֮��֧���˱䳤���飬���ʱ����������Ĵ�С�Ǳ�������������ָ����ʽ�������ǲ��ܳ�ʼ���ġ�
//    int m = 100;
//    int arr4[m];
//
//    return 0;
//}

//VS��C99�е�һЩ�﷨֧�ֲ��Ǻܺã���֧�ֱ䳤�����

//int main()
//{
//    char arr[10] = "hello bit";
//    return 0;
//}
//
//int Max(int x, int y)
//{
//    if (x > y)
//        return x;
//    else
//        return y;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    //��2�������Ľϴ�ֵ
//    int r = Max(a, b);
//    printf("%d\n", r);
//
//    return 0;
//}
//



//#include <stdio.h>
//
//int main()
//{
//    //����
//    int x = 0;
//    int y = 0;
//    scanf("%d", &x);
//    //����
//    if (x > 0)
//        y = -1;
//    else if (x == 0)
//        y = 0;
//    else
//        y = 1;
//
//    //���
//    printf("%d\n", y);
//
//    return 0;
//}
//

//int main()
//{
//    //int a = 7 / 2;
//    //int b = 7 % 2;//ȡģ
//    //printf("%d\n", a);
//    //printf("%d\n", b);
//    // / ���ŵ����˶���������ʱ��ִ�е��������������������ֻҪ��һ����������ִ�и������ĳ���
//    float a = 7.0 / 2.0;
//    int b = 7 % 2;//ȡģ
//    //ȡģ������������������ֻ��������
//
//    printf("%.2f\n", a);
//    printf("%d\n", b);
//
//
//    return 0;
//}

//int main()
//{
//    int a = 0;//��ʼ��
//    a = 20;//��ֵ
//
//    a = a + 3;//a=23
//    a += 3;
//
//    a -= 3;
//    a = a - 3;
//
//
//    return 0;
//}
//


//C������
//0��ʾ��
//��0��ʾ��
//
//
//int main()
//{
// /*   int flag = 2;
//    if (!flag)
//    {
//        printf("hehe\n");
//    }*/
//
//  /*  int a = -10;
//    int b = +a;
//    printf("%d\n", b);*/
//
//
//    //sizeof�ǲ��������ǵ�Ŀ������
//
//    //int a = 10;
//    //printf("%d\n", sizeof(a));//4
//    //printf("%d\n", sizeof(int));//4
//    //printf("%d\n", sizeof a);//4
//
//    //int arr[10] = { 0 };
//    //printf("%d\n", sizeof(arr));//40 ���������������Ĵ�С����λ���ֽ�
//    //printf("%d\n", sizeof(arr[0]));//
//    //printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10 - �����Ԫ�ظ���
//
//    //int a = 10;
//    //int b = a++;//����++����ʹ�ã���++
//    //int b = a; a=a+1;
//
//    //int b = ++a;//ǰ��++��ǰ++����ʹ��
//    //a=a+1;b=a;
//
//    //int a = 10;
//    ////int b = a--;
//    ////b=a; a=a-1;
//    //int b = --a;
//    ////a = a - 1; b = a;
//    //printf("%d\n", b);// 9
//    //printf("%d\n", a);// 9
//
//    //int a = (int)3.14;
//    //int a = int(3.14);//err
//    //printf("%d\n", a);
//
//    //3.14 ���渡������������Ĭ�����Ϊdouble����
//
//    return 0;
//}
//


//
//int main()
//{
//    int a = 10;
//    if (a == 3)
//    {
//        printf("hehe\n");
//    }
//
//    return 0;
//}
//

//
//int main()
//{
//    //&& �߼��� - ����
//    //|| �߼��� - ����
//
//    /*int a = 0;
//    int b = 0;
//    if (a && b)
//    {
//        printf("hehe\n");
//    }*/
//
//    //int a = 0;
//    //int b = 0;
//
//    //if (a || b)
//    //{
//    //    printf("hehe\n");
//    //}
//
//    int a = 10;
//    int b = 20;
//
//    int r = (a > b ? a : b);
//
//    return 0;
//}


//���ű��ʽ���Ƕ��Ÿ�����һ�����ʽ
//���ű��ʽ���ص��ǣ������������μ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��

//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = 0;
//    //       c=8    a=28   5
//    int d = (c=a-2, a=b+c, c-3);
//    printf("%d\n", d);
//
//    return 0;
//}

//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int n = 3;
//    arr[n] = 20;//[]�����±����ò�����  arr��3����[]�Ĳ�����
//
//    //a+b 
//    return 0;
//}


////�������ò�����()
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//    int sum = Add(2, 3);//()���Ǻ������ò�������Add,2,3����()�Ĳ�����
//
//    return 0;
//}
//

int main()
{
    int a = 10;//�Զ�����

    return 0;
}


