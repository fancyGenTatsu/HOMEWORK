#include<stdio.h> 
int main()
{
	int r,c,i,j,x1,x2,y1,y2,x,y,temp;
	int a[50][50];
	scanf("%d%d",&c,&r);
	   for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
		scanf("%d%d",&y1,&y2);
		for(i=0;i<c;i++)
		{
			temp=a[i][y1-1];
			a[i][y1-1]=a[i][y2-1];
			a[i][y2-1]=temp;
		}
		for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
