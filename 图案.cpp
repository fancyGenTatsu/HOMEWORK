#include<stdio.h>
int main()
{
	int n,x;
	scanf("%d",&n);
    if(n>0&&n<8)
	{
		if(n==1)
		x=2;
		if(n==2)
		x=6;
		if(n==3)
		x=1;
		if(n==4)
		x=5;
		if(n==5)
		x=3;
		if(n==6)
		x=3;
		if(n==7)
		x=0;
		printf("%d\n",x);
	}
	else
	printf("Input Error\n");
} 
