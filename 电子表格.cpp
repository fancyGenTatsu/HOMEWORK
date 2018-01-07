#include<stdio.h>
int main()
{
	int r,c,i,j,x1,x2,y1,y2,x,y,n,temp;
	char s[2];
	int a[50][50];
	scanf("%d%d",&c,&r);
	   for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&s);
		if(s=="SR")
		//交换两行
	{
	    scanf("%d%d",&x1,&x2); 
		for(j=0;j<r;j++)
		{
			temp=a[x1-1][j];
			a[x1-1][j]=a[x2-1][j];
			a[x2-1][j]=temp;
		}
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d ",a[i][j]);
			printf("\n");
		}}
	}
	     if(s=="SC")       //交换两列	
		{
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
			printf("\n");
		}
		}
		
		
		if(s=="DR")//删除某行 
		{
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
	}
		
		if(s=="DC")//删除某列 
		scanf("%d",&y);
		if(s=="IR")//在x行上面插入一行，新插入的行的所有单元格值为0
		scanf("%d",&x);
		if(s=="IC")//在y列前面插入一列，新插入的列的所有单元格值为0 
		scanf("%d",&y);
		
	}
	
		
	}
	return 0;
}

		
