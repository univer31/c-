#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	/*if (a > b)
		max = a;
	else
		max = b;*/
	max = (a > b ? a : b);
	printf("%d\n", max);
		return 0;
}
int main()
{
	int a = (int)3.14;//强制转换
	return 0;
}
int main()
{
	int a = 10;
	//printf("%d\n", ++a);//先++,后使用
	printf("%d\n", a++);//先使用，后++
	return 0;
}
int main()
{
	int a = 0;
	printf("%d\n", ~a);//按位取反
	//000000000000000000000000000000存储（补码）
	//111111111111111111111111111111补码
	//111111111111111111111111111110反码
	//100000000000000000000000000001原码
	return 0;
}
int main()
{
	short s = 0;
	int a = 10;
	printf("%d\n", sizeof(s = a + 5));//2
	printf("%d\n", s);0
	return 0;
}
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num>> i) & 1))
			count++;
	}
	printf("%d\n", count);
	//num&1==1
	//00000000000000000000000000000011
	//00000000000000000000000000000001
	/*while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}*/
	return 0;
}
int main()
{
	int a = 3;
	int b = 5;//溢出
	printf("before:a=%d,b=%d\n", a, b);
	/*a = a + b;  011
	b = a - b;    110
	a = a - b;*/
	a = a^b;
	b = a^b;
	a = a^b;
	printf("after:a=%d,b=%d\n", a, b);
	return 0;
}
int main()
{
	int a = 3;
	int b = 5;
	//int c = a&b;
	//#.011
	//#.101
	//001
	//int c = a | b;
	//111
	int c = a^b;
	//110
	printf("%d\n", c);
	return 0;
}
int main()
{
	int a = 5;
	int b = a << 1;//左移操作符：左边丢弃，右边补0
	//00000000000000000000000000000000000101
	printf("%d\n", b);
	return 0;
}
int main()
{
	int a = -1;//整数的二进制表示有：原码，反码，补码
	//存储到内存的是补码
	//10000000000000000000000000000001 -原码
	//11111111111111111111111111111110 -反码
	//11111111111111111111111111111111 -补码
	int b = a >> 1;
	printf("%d\n", b);
	return 0;
}
int main()
{
	int a = 10;
	//>>右移操作符
	//移动的是二进制位
	int b= a >> 1;
	printf("%d\n", b);
	return 0;
}
int main()
{
	double a = 5.0 / 2.0;
	printf("a = %lf\n", a);
	return 0;
}
