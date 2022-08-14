//计算n的阶乘
#include<stdio.h>
int main()
{
	int i=0;
	int n=0;
	int ret=1;
	scanf("%d",&n);//输入n
	for(i=1;i<n;i++)
	{
		ret=ret*i;
	}
	printf("ret=%d\n ",ret);
 return 0;
}

