#include<stdio.h>
#include<math.h>
int main()
{
	double a,b;
	printf("������ʵ��a:");
	scanf("%lf",&a);
 	printf("������ʵ��b:");
 	scanf("%lf",&b); 
 	if(fabs(a-b)<=1e-6)
 	{
	 printf("a=b");
    }
	else
	{
		printf("a��b�����");
	}
	return 0;
}

