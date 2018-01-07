#include<stdio.h>
int main()
{
	int n,i,j,temp;
	int a[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j>0;j--) 
		{
		if(a[j-1]>a[j])
		{
			temp=a[j-1];
			a[j-1]=a[j];
			a[j]=temp;
		}
		}
		for(j=0;j<=i;j++)
		{
			printf("%d ",a[j]);
		}
		printf("\n");
	}
return 0;	
}
