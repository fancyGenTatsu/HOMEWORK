#include<stdio.h>
#include<math.h>
int main()
{
	int n,N,t,i=0;
	scanf("%d",&n);
	for(N=1;N<=n;N++)
	{
		t=N;
		while(t)
		{
			if(t%10==1)
			i++;
		}
	}
	printf("%d",i);
	return 0;
}
