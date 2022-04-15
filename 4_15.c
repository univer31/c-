#define _crt_secure_no_warnings 1
#include <stdio.h>
#include <string.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str!= '\0')
	{
		count++;
		str++;
	}return count;
}
//把大事化小
//my_strlen("bit")
//1 + my_strlen("it")
//1 + 1 + my_strlen("t")
//1 + 1 + 1 + my_strlen("")
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + strlen(str + 1);
	}
	else
		return 0;
}
int main()
{
	char arr[] = "bit";
	/*int let = strlen(arr);
	printf("%d\n", let);*/
	//模拟实现一个strlen函数
	int let = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
	printf("let= %d\n", let);
	return 0;
}
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n%10);
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
//1234 print(123)4   print(12)3    print(1)2
	return 0;
}
int main()
{
	printf("hehe\n");
	main();//栈溢出 函数递归
	return 0;
}
//函数声明
int add(int, int);
#include"add.h"
int main()
{
	int a = 15;
	int b = 20;
	int sum = add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}
//函数的定义
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//printf打印的是字符串的个数  4321
}
int main()
{
	int len = 0;
	len = strlen("abc");
		//printf("%d\n", len);
	//printf("%d\n", strlen("abc"));
	return 0;
}
void add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	add(&num);
	printf("num=%d\n", num);//1
	add(&num);
	printf("num=%d\n", num);//2
	add(&num);
	printf("num=%d\n", num);//3
	return 0;
}
