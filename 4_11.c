
//static int g_val = 10;*///全局变量
//static int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password,"123456") == 0)//==不能用来比较两个字符串是否相等，用库函数strcmp
//		{//大于就返回正数，小于返回负数
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//		
//	}
//	if (i == 3)
//		printf("三次密码都错误，退出程序\n");
//}
//int main()
//{
//	char arr1[] = "xi huan ni ya hzy!!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0])-2;字符串后面还有/0{123/0}
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休息1秒
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 8, 9, 10, 13};
//	int k = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;//写一个代码，在arr数组中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了,是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum =%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//		printf("sum =%d\n", sum);
//	
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = i * ret;
//	}
//	printf("ret =%d\n", ret);//求n!
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;//break;
//		printf("%d", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//k=0为假，不执行
//		k++;
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("haha\n");//100个haha
//		}
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)
//	{
//		printf("haha\n");//for循环的初始化 判断 调整都可以省列
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//前闭后开
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	//初始化 判断 调整
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;
//			//break;
//		printf("%d\n", i);//1234678910
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;//初始化
//	while (i <= 10)//判断
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);//1234
//		i++;//调整
//	}
//	return 0;
//}
