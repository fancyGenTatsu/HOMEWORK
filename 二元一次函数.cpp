#include<stdio.h>
int main()
{
	double a,b,c,d,m,n,x,y;
	printf("请输入变量a：\n");
 	scanf("%lf",&a);
 	printf("请输入变量b：\n");
 	scanf("%lf",&b);
 	printf("请输入变量m：\n");
 	scanf("%lf",&m);
 	printf("请输入变量n：\n");
 	scanf("%lf",&n);
	scanf("&lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m,&n);
	x=(m*d-b*n)/(a*d-b*c);
	y=(m*c-a*n)/(b*c-a*d);
	printf("x=%lf,y=%lf",x,y);
	return 0;
 } 
