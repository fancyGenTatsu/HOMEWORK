#include<stdio.h>
int main()
{
	int a,n,i,b,s;
	scanf("%d%d",&a,&n);
	s=a;
	b=a;
	for(i=0;i<n-1;i++)
	{
		b=b*10+a;
		s=s+b;
	}
	printf("%d",s);
	return 0;	
}
