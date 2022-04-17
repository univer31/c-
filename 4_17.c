#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[] = { 1, 2, 3, 4 ,5,6,7};
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr+1);
}
//1.sizeof(数组名)，表示整个数组
//2.&数组名，数组名表示整个数组，&数组名，取出的是整个数组的地址
//arr = &arr[0]
void bubble_sort(int arr[] ,int sz)
{  
	int flag = 1;//假设这一趟排序的数据已经有序
	//确定趟数
	int i = 0;
	for (i = 0; i < sz; i++)
	{//每一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{ 
			if (arr[j] > arr[j + 1])
			{
				int tep = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tep;
				flag = 0;//本趟排序的数据其实不完全有序
			}

		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,0,1,2,3,4,5,6,7,8};//10个元素，9趟冒泡排序，共45趟
	//排成升序
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);//冒泡排序函数
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
