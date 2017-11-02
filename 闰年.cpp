#include<stdio.h>
#include<math.h> 
int main()
{
	int n,a,b,c;
	printf("请输入年份");
	scanf("%d",&n);
	a=n%100;
	if(a==0)//以00结尾 
	{
		b=n%400;
		if(b==0)//能被400整除
		printf("是闰年!");
		else 
		printf("不是闰年!"); 
	}
	else
	{
		c=n%4;
		if(c==0)
		printf("是闰年"); 
		else
		printf("不是闰年");
	}
	return 0;
}
