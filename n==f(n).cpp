#include<stdio.h>
int main()
{
	int N,t,n,i=0,j=0,k;
	scanf("%d",&n);
	for(N=1;N<=n;N++)
	{
	    if(N%10==1)
	    i=i+1;
	}
    while(j!=i)
	{
		j++;
	}
	k=j;
	printf("%d",k);
	return 0;
}
