#include<stdio.h>
int main()
{
	int n,x;
	int a[10],b[10];
	int i=0;
	int k,j;
	int l=0;
	int sum;
	int m,p;
	int u=0;
	scanf("%d",&n);
	for(x=11111;x<=999999;x++)
	{
		while(x)
       {
	       k=x;
		   a[i]=k%10;
	       k=k/10;
	       i++;
	       l++;
       }
       for(j=0;j<l;j++)
	{
		b[j]=a[l-1-j];
	}
    for(m=0;m<l;m++)
    {
	if(a[m]==b[m])
	   p++;
	}
    if(p==l)
    {
    	for(j=0;j<l;j++)
    	{
    		sum=sum+a[j];
		}
		if(sum==n)
		{
			for(j=0;j<l;j++)
			{
				printf("%d",a[j]);
				u++;
			}
		}

	}
    }
    if(u==0)
    printf("-1");
    return 0;
}
