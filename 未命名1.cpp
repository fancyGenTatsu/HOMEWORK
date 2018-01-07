#include<stdio.h>
int main()
{
	int k,x,m,a[10];
	int i=0;
	int j=0;
	int l=0;
	int n=0;
	int d=0;
	scanf("%d",k);
	for(i=0;i<k;i++)
	{
	scanf("%d",x);
    for(j=0;j<k;j++)
    {
        m=k-j;
	   	if(k%m==0)
	   	{
		   l=l+1;
		   a[l]=m;
		   for(n=0;n<m;n++)
		   {
		   	if(m%n==0)
		   	{
		   		l=l+1;
		   		a[l]=n;
			   }
		   }
	    }
	}
	}
	for(d=0;d<=l;d++)
	{
	   printf("%d",a[d]);
    }
    return 0;
}
