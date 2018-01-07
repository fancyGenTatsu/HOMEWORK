#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	int i=0;
	double a,b,c,s,p,m;
	scanf("%d",&T);
	for(i=0;i<=T;i++)
	{ 
		a=0;b=0;c=0;
		scanf("%lf%lf%lf",&a,&b,&c);
	    if(a+b>c&&a+c>b&&b+c>a)
		{
		p=(a+b+c)/2;
		m=p*(p-a)*(p-b)*(p-c);
		s=sqrt(m);
	    printf("%.2lf\n",s);
	    }
	    else
	    printf("error\n");
	}
	return 0;
}
