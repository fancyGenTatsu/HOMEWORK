#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int i,j;
	int m=1;
	int k=0;
	int a[100][100];
	while(m<=(N*N+N)/2)
	{
		for(i=k,j=0;i>=0,j<=k;i--,j++)
		{
			a[i][j]=m++;
		}
		k++;
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-i;j++)
		{
			printf("%d",a[i][j]);
			printf(" ");
		}
		printf("\n");
	}
return 0;
}
