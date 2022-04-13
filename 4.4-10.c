#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("输入密码：>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//==不能用来比较两个字符串是否相等，用库函数strcmp
		{//大于就返回正数，小于返回负数
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}

	}
	if (i == 3)
		printf("三次密码都错误，退出程序\n");
}
int main()
{
	char arr1[] = "xi huan ni ya hzy!!!!";
	char arr2[] = "#####################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0])-2;字符串后面还有/0{123/0}
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		sleep(1000);//休息1秒
		system("cls");//执行系统命令的一个函数-cls-清空屏幕
		left++;
		right--;

	}
	printf("%s\n", arr2);
	return 0;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 8, 9, 10, 13 };
	int k = 5;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
	int right = sz - 1;//右下标
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid]>k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了,下标是:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;//写一个代码，在arr数组中找到7
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了,是：%d\n", i);
			break;
		}
	}
	if (i == sz)
		printf("找不到\n");
	return 0;
}
int main()
{
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("sum =%d\n", sum);
	return 0;
}
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("sum =%d\n", sum);

	return 0;
}
int main()
{
	int i = 0;
	int ret = 1;
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = i * ret;
	}
	printf("ret =%d\n", ret);//求n!
	return 0;
}
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			continue;//break;
		printf("%d", i);
		i++;
	} while (i <= 10);
	return 0;
}
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)//k=0为假，不执行
		k++;
	return 0;
}
int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("haha\n");//100个haha
		}
	}
	return 0;
}
int main()
{
	for (;;)
	{
		printf("haha\n");//for循环的初始化 判断 调整都可以省列
	}
	return 0;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	for (i = 0; i < 10; i++)//前闭后开
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
int main()
{
	int i = 0;
	//初始化 判断 调整
	for (i = 1; i <= 10; i++)
	{
		if (5 == i)
			continue;
		//break;
		printf("%d\n", i);//1234678910
	}
	return 0;
}
int main()
{
	int i = 1;//初始化
	while (i <= 10)//判断
	{
		if (5 == i)
			continue;
		printf("%d\n", i);//1234
		i++;//调整
	}
	return 0;
}
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch<'0' || ch >'9')
			continue;
		putchar(ch);
	}
	return 0;
}
int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");//输入密码，并存放在password数组中
	scanf("%s", password);//scanf只读空格前面的
	//缓冲区还剩余一个'\n'
	//getchar();getchar只能拿走一个数字或者符号
	while ((ch= getchar()) != '\n')
	{
		;
	}
	printf("请确认（Y/N）:>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	return 0;
}
int main()
{
	int ch = 0;
	//ctrl+z
	//EOF-end of file- >-1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	/*int ch = getchar();
		putchar(ch);
	printf("%c\n", ch);*/
	return 0;
}
int main()
{
	int i = 0;
	while (i<10)
	{
		i++;
		if (5 == i)
			continue;//后面的代码不再执行，跳到while判断语句	//break;终止循环
		printf("%d", i);
		//i++;
	}
	return 0;
}
int main()
{
	int day = 0;
	scanf("%d", &day);//switch(整型表达式)case 整型常量表达式
	switch ( day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期日\n");
		break;
	default:
		printf("输入错误\n");
		break;

	}
	return 0;
	/*int i = 1;
	while (i <= 100)
	{
		if (i % 2 != 0)
		printf("%d", i);
		i++;
	}	*/	
	/*return 0;*/
}
int main()
{
	int a = 7;
	if (a % 2 == 0)
		printf("不是奇数\n");
	else
		printf("奇数\n");
	return 0;
}
int main()
{
	int num = 4;
	if (num = 5)
	{
		printf("hehe\n");//=赋值 ==判断相等
	}
	return 0;
}
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("ha\n");
		else
			printf("he\n");//悬空else  就近原则
	return 0;
}
int main()
{
	int age = 16;
	if (age < 18)
	{
		printf("未成年\n");
		printf("不准谈恋爱\n");//{}代码块
	}
	else
	{
		if (age >= 18 && age < 30)
			printf("青年\n");
		else if (age >= 30 && age < 56)
			printf("壮年\n");
		else
			printf("lao jia huo\n");
	}
	/*if (age < 18)
		printf("未成年\n");
	else
	printf("成年\n");*/
	return 0;
}
struct Book
{
	char name[20];//c语言程序设计
	short price;//55
};
int main()
{
	struct Book b1 = { "C语言程序设计",55 };
	strcpy(b1.name,"C++");//string copy 字符串拷贝-库函数-string.h
	printf("%s\n", b1.name);
	/*struct Book* a1 = &b1;
	printf("书名:%s\n",a1->name);
	printf(":%d\n",a1->price);*/
	//.   结构体变量.成员
//->  结构体指针.成员
	/*printf("书名:%s\n", (*a1).name);
	printf("%d\n",sizeof(&b1));*///&b1和a1一样

		/*printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	b1.price = 25;
	printf("修改后的价格：%d\n", b1.price);*/
	return 0;
}
//结构体-我们自己创造出来的类型
int main()
{
	double d = 3.14;
	double* pd = &d;
	*pd = 6.5;
	printf("%lf\n", d);
	printf("%d\n", sizeof(pd));//32-4 64-8

	return 0;
}
int main()
{
	char ch = 'a';
	char* ph = &ch;
	*ph = 'c';
	printf("ch =%c\n", ch);
	printf("ch =%d\n", sizeof(ph));
	return 0;
}
int main()
{
	int a = 10;//4字节
	int* p = &a;//取地址 指针变量存放地址
	printf("%p\n", &a);
	printf("%p\n", p);
	*p = 20;//解引用操作符
	printf("a=%d\n", a);
	return 0;
}
#define MAX 100//定义标识符常量
函数的实现
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
//宏的定义
#define Max(X,Y)(X>Y? X:Y)
int main()
{
	//int a = MAX;
	int a = 10;
	int b = 20;//函数
	int max = Max(a, b);
	printf("max= %d\n", max);
	//宏的方式
	max = Max(a, b);
		printf("max=%d\n", max);
	return 0;

}
extern int Add(int,int);
int main()
{
	int a = 20;
	int b = 40;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;

}
//static 修饰局部变量,局部变量的生命周期变长
//修饰全局变量，改变作用域,让静态的局部变量只能在源文件里用
//修饰函数  改变了函数的链接属性（外部变内部）

int main()
{
	extern int g_val;//extern声明外部符号
	printf("g_val=%d\n", g_val);
	return 0;

void test()
{
	static int a = 1;//a是静态局部变量
	a++;
	printf("a =%d\n", a);//2 3 4 5 6
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
			i++;
	}
	return 0;

	typedef unsigned int u_int;//类型定义
	unsigned int num = 20;//无符号
	u_int num2 = 20;
	return 0;
}
int main()
{
	register int a = 10;//建议把a定义成寄存器变量
	return 0;
}
int main()
{
	int a = 100;
	int b = 20;
	int max = 0;
	max = (a > b ? a : b);三目操作符
	printf("max =%d\n", max);
	return 0;
}
int main()
{
	int a = 0;
	int b = 5;
	/*int c = a && b;*//*逻辑与*/
	int c = a || b;逻辑或
	printf("c =%d\n", c);
	return 0;
}
int main()
{
	int a = (int)3.14;强制类型转换
	return 0;
}
int main()
{
	int a = 10;
	/*int b = a++;*/
	int b = ++a;
	printf("a = %d b = %d\n", a, b);//*后置++，先使用，再++*/，前置++则相反（--同理）
	return 0;
}
int main()
{
	int a = 0;/*000000000变为111111111*/
	int b = ~a;/*按位取反*/
	/*原码、反码、补码（）0开头为正数原码，1开头为负数，正数的原码补码反码一样
		11111111补
		11111110反
		10000001原
    负数在内存中存储的时候，存储的是二进制的补码*/
	printf("%d\n", b);/*打印的是原码*/
	return 0;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));

	return 0;
}
Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = 0;
	max = Max(num1, num2);函数调用操作符
	printf("max = %d\n", max);
	return 0;
}
int main()
{
	/*sizeof 计算的是变量/类型所占空间的大小，单位是字节*/
	int a = 10;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);
	/*printf("%d\n", sizeof int);这个不行*/
	return 0;
}
单目操作符，双目操作符，三目操作符
a + b 双目
int main()
{
	int a = 10;
	printf("%d\n", a);真  假
	printf("%d\n", !a);
	return 0;
}
int main()
{
	int a = 10;
	/*a = a + 10;*/
	a += 10;
	a = a & 2;
	a &= 2;复合赋值符

	printf("%d\n", a);
	/*=赋值 ==判断*/
	return 0;
}
int main()
{
	int a = 1;4个字节 000000000000000000000000000
	int b = a << 2;
	printf("%d\n", b);
	/*<<左移  >>右移 2进制操作符*/
//&按位与(同1才是1，否则为0 ) |按位或（有1就是1） ^按位异或（对位二进制相同为0，相异为1）0为假，非0为真
	return 0;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;

	}
	/*printf("%d\n", arr[7]);*/
	/* char ch[20]; float arr2[5]*/
	/*return 0;
}*/
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int a = 100;
	int b = 200;
	int sum = 0;
	sum = Add(a, b);
	printf("sum = %d/n", sum);
	return 0;
}
int main()
{
	int line = 0; 
	printf("加入比特\n");

	while (line<20000)
	{
		printf("敲一行代码: %d\n",line);
			line++;
	}
	if (line>=20000)
		printf("hao offer\n");
	return 0;
}
int main()
{
	int input = 0;
	printf("jiarubite\n");
	printf("你要好好学习吗？(1/0):>");
	scanf("%d", &input);
	if (input == 1)
		printf("好offer\n");
	else
		printf("买番薯\n");
	return 0;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	/*printf("%d\n", strlen("c:\test\32\test.c"));*/
	/*printf("%c\n", '\'');*/
	/*printf("abc\n");转义字符*/ /*\t-水平制表符*/
	/*return 0;*/
    /*char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c','\0'};
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));*//*strlen=string length 计算字符串长度*/
 	char arr1[] = "abc";/*\0,字符串的结束标志*/
	char arr2[] = { 'a', 'b', 'c',0 };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}


int main()
{ 
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int ));
	printf("%d\n", sizeof(long));
	/*printf("hello worid/n");*/
	/*double d = 3.14;
	printf("%lf\n", d);*/
	/*return 0;*/
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanfs("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}
int main()
{
	/*extern 声明外部符号*/
	/*int num = 0;
	{
		printf("num = %d\n", num);
	}*/
	

	return 0;
}
