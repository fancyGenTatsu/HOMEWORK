#include<stdio.h>
#include<string.h>
int main()
{
	int n;char a[100];
	char s[100];
	scanf("%d\n",&n);
	int i,j;
	int k=0;
	for(i=0;i<n;i++)
	{
		gets(s);
		int x= strlen(s);
        for(j=0;j<x;j++)
		{
			if(s[j]<='z'&&s[j]>='a')
			{
				a[k]=s[j];
				k++;
			}
		}
		for(j=k-1;j>=0;j--)
		{
			printf("%c",a[j]);
		}
		printf("\n");
	}
	return 0;
}
