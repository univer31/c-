#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
int main()
{
	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n ",i,j, &arr[i][j]);
		}
	}

	return 0;
}
int main()
{
	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ",arr[i][j]);
		}printf("\n");
	}

	return 0;
}
int main()
{
	int arr[3][4] = {};//列不能省列
	return 0;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//数组在内存中是连续存放的
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p\n", i, &arr[i]);
	}
	return 0;
}
int main()
{
	char arr1[] = "abc";//a b c\0
	char arr2[] = { 'a', 'b', 'c' };//a b c直到找到\0
	printf("%d\n",sizeof(arr1));//4
	printf("%d\n",sizeof(arr2));//3
	printf("%d\n",strlen(arr1));//3
	printf("%d\n",strlen(arr2));//随机值
	return 0;
}
int main()
{ sizeof 所占空间大小  strlen 字符串长度"\0不算"
int arr[10]={1,2,3};不完全初始化，后面默认为0
	int arr[10];[]中要一个常量
	char arr2[5];数组创建
	return 0;
}
斐波那锲数列 1 1 2 3 5 8 13 21 34 55...
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//TDD测试驱动开发
	ret = Fib(n);
	printf("ret=%d\n", ret);
	return 0;
}
int Fac1(int n)
{
	int i = 0;
	int let = 1;
	for (i = 1; i <= n; i++)
	{ 
		let  *= i;
	}return let;
}
int Fac2(int n)
{
	int let = 0;
	if (n > 1)
		return n*Fac2(n - 1);
	else
		return 1;
}
int main()
{
	//求n的阶乘
	int n = 0;
	int let = 0;
	scanf("%d", &n);
	let = Fac2(n);//循环的方式
	printf("%d", let);
	return 0;
}
