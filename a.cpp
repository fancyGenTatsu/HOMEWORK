#include<stdio.h>
int main()
{
	int n,i,a,b;
	a=0,b=0;
	scanf("%d",&n);
	for(i=0;i<=n;++i)
	{   a=a+i;
		b=b+a;
	}
		printf("%d",b);
	return 0;
}
