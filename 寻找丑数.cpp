#include<stdio.h>
int main()
{
	int n,i,x,j,k,q;
	int s=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		for(j=1;j<=x;j++)
		{
				if(j==1)
				printf("1 ");
				else
				{
					if(j%2==0||j%3==0||j%5==0)
				   {
				   	    for(k=1;k<=j;k++)
				   	   {
				   	  	    q=j/k;
							if(j%k==0&&q!=2&&q!=3&&q!=5)
							;
							else s++;
				       }
				   if(s==j)
				   printf("%d ",j);
				   }
				}
		}
		printf("\n");
		s=0;
	}
return 0;
}
