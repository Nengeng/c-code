#include<stdio.h>
#include<stdlib.h>//生成随机数库函数
#include<time.h>//时间戳库函数
void menu()//菜单
{
	printf("************************************\n");
	printf("*****    1、play      0、exit  *****\n");
	printf("************************************\n");
}
void game()
{
	//1、生成一个随机数
	  int ret=0;
	  int guess=0;
	  //用时间戳设置随机数起点
	  //时间戳
	  //time_t time(time_t* timer )
	  //srand((unsigned int)time(NULL));
      //ret=rand();//rand随机数0到0X7FFF（32767）
	   ret=rand()%100+1;//生成1--100之间的随机数
      //printf("%d\n",ret);
	   //2、猜数字
	   while(1)
	   {
		   printf("请猜数字：>");
		   scanf("%d",&guess);
		   if(guess>ret)
		   {
		      printf("猜大了\n");
		   }
		   else if(guess<ret)
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
int main()
{
	int input=0;
	 srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
				break;
		default:
			printf("选择错误\n");	
		}
	}
	while(input);
    return 0;
}
