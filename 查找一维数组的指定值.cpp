#include<stdio.h>
int main()
{
	int n,i,j,m;
	scanf("%d",&n);
	int a[5];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(j=0;j<n;j++)
	{
		if(a[j]==m)
		printf("%d ",j);
		else;
	}
return 0;
}
