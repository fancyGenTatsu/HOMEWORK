#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10];
	char s2[10];
	gets(s1);
	gets(s2);
	int a,b;
	a=strlen(s1);
	b=strlen(s2);
	printf("%d %d",a,b);
	return 0;
}
