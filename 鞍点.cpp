#include<stdio.h> 
int main()
{
	int n,m,i,j,k,i0,j0,x=0;
	int a[51][51];
	scanf("%d%d",&n,&m);
	   for(i=0;i<n;i++)
	   {
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	    }
	    
	for(i=0;i<n;i++)
	{
	j0=0;
	for(j=0;j<m;j++)
	{
		if(a[i][j]>a[i][j0])
		j0=j;
	    k=1;
	for(i0=0;i0<n;i0++)
	{
		if(a[i0][j0]<a[i][j0])
		k=0;
	}
	}
    if(k==1)
    {
	printf("a[%d][%d]=%d\n",i,j0,a[i][j0]);
	x=1;
	}
    }
    if(x==0)
    printf("NO");
    return 0;
}
