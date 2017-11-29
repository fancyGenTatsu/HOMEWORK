#include<stdio.h>
int fun(int n)
{
	int x;
	if(n==1)
	  x=0;
	for(x=0;n!=1;x++)
	{
	    if(n%2==0)
		{
			n=n/2;
		}
	    else
		n=(3*n+1)/2;	
	}
     return x;
}
int main()
{
	int T,i,n,x;
	scanf("%d",&T); 
	for(i=0;i<T;i++)
	{
		scanf("%d",&n);
		x=fun(n);
		printf("%d\n",x);
	}
	return 0;
}
