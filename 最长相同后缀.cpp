#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	char s2[100];
	scanf("%s",&s1);
    scanf("%s",&s2);
	int a,b;
	int i=0;
	a=strlen(s1);
	b=strlen(s2);
	while(s1[a-1-i]==s2[b-1-i])
	{
		i++;
		}
    if(i==0)
	printf("null");
	else
	{
	    for(int j=0;j<i;j++)
		{
			printf("%c",s1[a-i+j]);
		}	
	}
	return 0;
}
