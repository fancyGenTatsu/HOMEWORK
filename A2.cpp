#include<stdio.h>
int main()
{
	int n,b=0,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
	    for(j=1;j<=i;++j)
		{
			b+=j;
	    }
    }
	printf("%d",b);
	return 0;
}

