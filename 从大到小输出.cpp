#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,x,y,z;//max=x,mid=y,min=z
	printf("请输入数a\n");
	scanf("%lf",&a);
	printf("请输入数b\n");
	scanf("%lf",&b);
	printf("请输入数c\n");
	scanf("%lf",&c);
	if(a<=b)
	{
		if(b<=c)
		{
			x=c;
			y=b;
			z=a;
		}
		else //b>c,b>=a
		{
			x=b;
			if(c<=a)
			{
				z=c;
				y=a;
			}
			else//c>a
			{
				y=c;
				z=a;
			}
		}
	}
	else//a>b
	{
		if(c>=a)
		{
			x=c;
			y=a;
			z=b;
		}
		else//c<a,a>b
		{
			if(b>=c)
			{
				x=a;
				y=b;
				z=c;
			}
			else//c>b
			{
				x=a;
				y=c;
				z=b;
			}
			
		}
		
	}
printf("%lf\n%lf\n%lf\n",x,y,z);	
return 0;
}
