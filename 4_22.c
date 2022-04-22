#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = b + a * 3;
	return 0;
}
int main()
{
	char a = 3;
	//00000000000000000000000000000011
	//00000011-a
	char b = 127;
	//00000000000000000000000011111111
	//01111111-b
	char c = a + b;
	//100000010-c
	//1111111111111111111111110000010补码

	printf("%d\n", c);//打印原码
	return 0;
}
//创建一个结构体类型-struct stu
struct stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	int a = 10;
	//创建学生类型s1,并初始化
	struct stu s1 = { "张三", 20, "19109130123" };
	struct stu* ps = &s1;
	printf("%s\n", ps->name);
	//printf("%s\n", (*ps).name);
	/*printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);*/
	return 0;
}
