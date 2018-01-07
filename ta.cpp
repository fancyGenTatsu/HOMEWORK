#include<stdio.h>
int main()
{
	int m,n,i,j,k;
	scanf("%d %d",&m,&n);
	if(m>=1&&m<=5&&n>=1&&n<=5)
	{
		for(j=0;j<m;j++)
		
		{
		for(i=0;i<n;i++)
		{
		        printf("--**-**--");
		        
		}printf("\n");
		for(i=0;i<n;i++)
		{
		    	printf("-*--*--*-");
		    
		}
	printf("\n");	
	for(i=0;i<n;i++)
		{
		    	printf("-*-----*-");
		    
		}
	printf("\n");
	
	for(i=0;i<n;i++)
		{
		    	printf("--*---*--");
		    
		}
	printf("\n");
	for(i=0;i<n;i++)
		{
		    	printf("---*-*---");
		    
		}
	printf("\n");
	for(i=0;i<n;i++)
		{
		    	printf("----*----");
		    
		}
	printf("\n");
	}}
	else
	printf("Input Error");

return 0;	
}
