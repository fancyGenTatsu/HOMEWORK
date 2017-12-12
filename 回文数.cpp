#include<stdio.h>
int main()
{
	int n,x,i,j,k,m,l;
	int a[20];
	scanf("%d",&n);
	x=n;
	for(i=0;i<n;i++)
	{
		a[i]=x%10;
		x=x/10;
	}
	if(i%2!=0)
	{
		for(j=0;j<((n-1)/2);j++)
		{
			if(a[n-j]==a[j])
			k++;
		}
		if(k==(n-1)/2)
		printf("Yes");
		else
		printf("No");
	}
	else
	{
		for(m=0;m<n/2;m++)
		{
			if(a[n-m]==a[m])
			l++;
		}
		if(l==n/2)
		printf("Yes");
		else
		printf("No");
		
	}
	return 0;
}
