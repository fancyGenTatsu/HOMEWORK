#include<stdio.h>
int main()
{
	double a,b,c; 
	printf("������ʵ��a:");
	scanf("%lf",&a);
	printf("������ʵ��b:");
	scanf("%lf",&b);
	if(a>=b)
	   {
	   c=a;
       }
	else
       {
	   c=b;
       }
    printf("%lf\n",c);
	return 0;
}
