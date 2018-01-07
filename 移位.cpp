#include<stdio.h>
int main()
{
	int a[10];
	int b[10];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
	  scanf("%d",&a[i]);
	}
	b[i]=a[i+n];
	printf("%d",b[i]);
	return 0;
}
