#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60(cmd 60s关机)-a取消
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在一分钟后关机，如果输入：你是猪，就取消关机\n请输入>：");
		scanf("%s", input);
	if(strcmp(input,"你是猪")==0)//比较两个字符串长度strcmp
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
{
	again:
	printf("hello,bike\n");//死循环 goto语句
	goto again;
	return 0;
}
//猜数字游戏
//1电脑会产生一个随机数
//2猜数字
//RAND-MAX-32767
void game()
{//生成一个随机数
	//time_t time(time_t*timer)
	//时间戳=现在时间-1971年....(拿时间戳来设置随机生成数的新起点)
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;//生成随机数1-100
	//printf("%d\n", ret);
	while (1)
	{ 
		printf("请猜数字~~:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}

		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
	
}
void menu()
{
	printf("***********************\n");
	printf("*** 1.play   0.exit ***\n");
	printf("***********************\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0; 
	do{
		menu();
			printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新输入\n");
			break;
		}
	} while (input);
	
	return 0;
}
