#include<stdio.h>
int main()
{
	int m,n,p,q;
	int i,j,k,l;
	int x=0;
	scanf("%d%d%d%d",&m,&n,&p,&q);
	int M1[m][n];
	int M2[p][q];
	int M3[m][q];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&M1[i][j]);
		}
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&M2[i][j]);
		}
	}
	if(n==p)
	{
		for(i=0;i<n;i++)
		{
		for(k=0;k<p;k++)
		{
			for(j=0;j<m;j++)
			{
			x=x+M1[i][j]*M2[j][k];
			M3[i][k]=x;
			}
			x=0;
		}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%d ",M3[i][j]);
			}
			printf("\n");
		}
	}
	else printf("error");
	return 0;
}
