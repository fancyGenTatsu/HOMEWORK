#include<stdio.h>
int main()
{
	int a,b; 
	scanf("%d\n",&a);
	scanf("%d\n",&b);
	if(a>b)
	printf("1");
	else{
		if(a==b)
		printf("0");
		else
		printf("-1");
	}
return 0;
}
