#include<stdio.h>
int main()
{
	int n,i,k,m,j,l;
	int a[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		scanf("%d",&k);
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[j]);
		}
		if(k>m)
		printf("error\n");
		else{
		int temp;
		for(j=0;j<m;j++)
		{
			for(l=0;l<m-j-1;l++)
			{
				if(a[l]>a[l+1])
				{
					temp=a[l];
					a[l]=a[l+1];
					a[l+1]=temp;
				}
			}
		}
		printf("%d",a[m-k]);
		printf("\n");
		}
	}
	return 0;
}
