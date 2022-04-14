#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
int binary_search(int arr[], int k,int sz)//本质上arr是一个指针
{
	int left = 0;
	int right =sz-1;
	while (left <= right)
	{
		int mid = (left + right) / 2;//中间元素的下标
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}return -1;
}
int main()
{//二分查找 在一个有序数组中查找具体的数,找到了返回下标，找不到返回-1
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz);//传过去的是首元素的地址
	if (ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}return 0;
}
int is_leap_year(int y)
{
	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (1 == is_leap_year(year))
		{
			printf("%d ", year);
		}
	}
	return 0;
}
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{//j<n
		if (n%j == 0)
			return 0;
	}return 1;
}
int main()
{//打印100-200的素数
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}
int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;
	printf("%d\n", a);
	return 0;
}
void Swap1(int* x, int* y)//当实参传给形参时，形参其实是实参的一份临时拷贝，对形参的修改是不会改变实参的
{
	int tep = 0;
	tep = *x;
	*x = *y;
	*y = tep;

	/*int tep = 0;
	tep= x;
	x = y;
	y = tep;*/
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	Swap1(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}
int get_max(int x, int y)
{  return(x>y)?(x):(y);
	/*if (x > y)
		return x;
	else
		return y;*/
}
int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max=%d\n", max);
	return 0;
}
int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);
	printf("%s\n", arr);
	//**** world
	return 0;
}
//memset memory-set 内存  设置
int main()
{ 
	char arr1[] = "bit";//"\0" 加上
	char arr2[20] = "#######";//\0######(\0字符串结束标志)
//strcpy-string copy-字符串拷贝
	strcpy(arr2, arr1);//arr1拷贝到arr2
	printf("%s\n", arr2);
	return 0;
}
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 30;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
