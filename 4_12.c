#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	//确定打印9行
	for (i = 1; i <= 9; i++)
	{//打印一行
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d  ", i, j, i*j);//%2d右对齐  %-2d左对齐
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	int arr[] = { -1, 2, -3, 4, 5, 6, 47, -8, 19, -10 };
	int max = arr[0];//最大值
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i <sz; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}
int main()
{//求1/1-1/2+1/3-1/4+....1/100
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag*1.0 / i;
		flag = -flag;
	}
	//1/1+1/2+1/3
	//1+0+0=1
	printf("%lf\n", sum);
	return 0;
}
int main()
{//1-·00里面有多少个9
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("count=%d\n", count);
	return 0;
}
int main()
{
	int i = 0;
	int k = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{//试除法
		for (k = 2; k <=sqrt(i); k++)//i=a*b 16=2*8=4*4 a/b至少有一个数字<=开平方i (k+=2)
		{
			if (i%k == 0)
			{
				break;
			}
		}
		//2种情况跳出到这
		if (k >sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{  //判断为闰年
		/*1.能被4整除且不能被100整除
		2.能被400整除*/
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount =%d\n", count);
	return 0;
}
int main()
{
	int m = 24;
	int n = 18;
	int r = 0;
	scanf("%d%d", &m, &n);//最小公约数
	while (r=m%n)
	{
		//r = m%n;
		m = n;
		n = r;
	}
	printf("%d\n ", n);
	return 0;
}
int main()
{
	int i = 0;
	for (i = 1; i < 100; i++)
	{
		if (i%3==0)
				printf("%d ", i);
		
	}
	return 0;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);//a>b>c
	if (a < b)
	{
		int tem = a;//临时变量tem
		a = b;
		b = tem;
	}
	if (a < c)
	{
		int tem = a;
		a = c;
		c = tem;
	}
	if (b < c)
	{
		int tem = b;
		b = c;
		c = tem;
	}
	printf("%d%d%d", a, b, c);
	return 0;
}
