#include<stdio.h>
int main()
{
	double a,b; 
	printf("请输入实数a:");
	scanf("%lf",&a);
	printf("请输入实数b:");
	scanf("%lf",&b);
	if(a>=b)
	   {
	   printf("%lf\n",a);
       }
	else
       {
	   printf("%lf\n",b);
       }
    return 0;
}
