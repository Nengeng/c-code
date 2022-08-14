#include<stdio.h>
#include<stdlib.h>//system()的库函数
#include<string.h>//字符串比较的库函数
int main()
{
	char input[20]={0};//input 里放20个字符
	//shutdown -s -t 60
	//system()-执行系统命令的
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
    scanf("%s",input);//输入input
	if(strcmp(input,"我是猪")==0)//比较两个字符串-stecmp();返回值为0表示input和“我是猪”相等
	{
	    system("shutdown -a");
	}
	else
	{
	   goto again;//goto 直接跳到again
	}
	return 0;
}

