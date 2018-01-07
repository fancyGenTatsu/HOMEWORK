#include<stdio.h>
int main()
{
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	if(m>=1&&m<=5&&n>=1&&n<=5)
	{
		for(i=0;i<n;i++)
		{
		        printf("--**-**--\n");
				printf("-*--*--*-\n");
				printf("-*-----*-\n");
				printf("--*---*--\n");
				printf("---*-*---\n");
				printf("----*----\n");
			for(j=0;j<m;j++)
			{
				printf("--**-**--\n");
				printf("-*--*--*-\n");
				printf("-*-----*-\n");
				printf("--*---*--\n");
				printf("---*-*---\n");
				printf("----*----\n");
			}
		}
	}
	else
	printf("Input Error");
return 0;	
}
