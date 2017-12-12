#include<stdio.h>
int main()
{
	int a[5];
	int i=0,j=0,t;
	for(i=0;i<5;i++)
	scanf("%d\t",&a[i]);
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			printf("%d\t",a[j]);
		}
	}
} 
