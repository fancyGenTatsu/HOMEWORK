#include<stdio.h>
int main()
{
	char x='a';
	scanf("%c",&x);
	if(x>='A'&&x<='Z')
	{
		x=x+32;
	printf("%c\n",x);
	}
	else
	{
	if(x>='a'&&x<='z')
	    {
     	x=x-32;
        printf("%c\n",x);
        }
	else
	printf("error");
	}
    
    return 0;
}
