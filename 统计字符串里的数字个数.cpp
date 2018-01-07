#include<stdio.h>
int main()
{
	char a[100];
	int n=0,i;
	scanf("%s",&a[100]);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		n++;
	}
	printf("%d",n);
	return 0;
}
