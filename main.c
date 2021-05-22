#include <stdio.h>
//int main()
//{
//	const char* p = "abcdef";//const 无法修改
//	*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char a[] = "abcd";
//	char b[] = "acbf";
//	char* p = "abcd";
//	char* d = "abcd";
//	/*if (a == b)
//	{
//		printf("haha\n");
//	}
//	else
//	{
//		printf("hehe\n");打印呵呵，因为首地址不一样
//	}*/
//
//	/*if (p == d)
//	{
//		printf("haha\n");
//	}
//	else
//	{
//		printf("hehe\n");打印哈哈，共用元素地址,但是pd地址不一样
//	}*/
//}

//指针数组	是数组	存放指针
//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整形指针的数组	指针数组
//	char* pch[4];//存放字符指针的数组	指针数组
//	return 0;
//}

//指针数组用法
//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 2,3,4,5 };
//	int arr3[] = { 3,4,5,6 };
//	int* arr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(arr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

