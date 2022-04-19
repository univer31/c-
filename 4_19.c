#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{ 
	char input[20] = { 0 };
	system("shutdown -s -t 60");//system()执行系统命令
	again:
	printf("请注意：你的电脑将在一分钟后关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);//%s 字符串
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
int main()
{//5^5=0;0^a=a
	int arr[] = { 1, 2, 3, 4, 5, 7, 5, 4, 3, 2, 1 };
	//暴力求解
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret^arr[i];
	}
	printf("单身狗是：%d\n",ret);
	return 0;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5,7,5, 4, 3, 2, 1 };
	//暴力求解
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{//统计arr[i]在数组中出现了多少次
		int count = 0;
		int j = 0;
		for (j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("单身狗：%d\n", arr[i]);
			break;
		}
	}
	return 0;
}
int main()
{
	int a = 3;
	int b = 5;
	printf("交换前：a=%d b=%d\n", a, b);
	a = a^b;              //011
	b = a^b;//按位异或      110
	a = a^b;              //101
	printf("交换后：a=%d b=%d\n", a, b);
	return 0;
}
