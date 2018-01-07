#include<stdio.h>
int main()
{
	int r,c,i,j,x1,x2,y1,y2,x,y,n,temp;
	char s[2];
	int a[50][50];
	scanf("%d%d",&c,&r);
	   
	   for(j=0;j<r;j++){
		for(i=0;i<c;i++){
			scanf("%d",&a[i][j]);
		}
	}

	
		
		   scanf("%d",&x);
	
		   for(j=0;j<r;j++)
	    	{
			temp=a[x-1][j];
			a[x-1][j]=a[x][j];
		    }
	    for(i=0;i<c;i++){
		for(j=0;j<r-1;j++){
			printf("%d ",a[i][j]);
			printf("\n");
		}
		
		}

		
		
	
	return 0;
}
