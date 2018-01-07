#include<stdio.h>
int main()
{
	double a,b,c; 
	printf("请输入实数a:");
	scanf("%lf",&a);
	printf("请输入实数b:");
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
