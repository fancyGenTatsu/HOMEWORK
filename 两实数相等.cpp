#include<stdio.h>
#include<math.h>
int main()
{
	double a,b;
	printf("请输入实数a:");
	scanf("%lf",&a);
 	printf("请输入实数b:");
 	scanf("%lf",&b); 
 	if(fabs(a-b)<=1e-6)
 	{
	 printf("a=b");
    }
	else
	{
		printf("a与b不相等");
	}
	return 0;
}

