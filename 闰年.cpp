#include<stdio.h>
#include<math.h> 
int main()
{
	int n,a,b,c;
	printf("���������");
	scanf("%d",&n);
	a=n%100;
	if(a==0)//��00��β 
	{
		b=n%400;
		if(b==0)//�ܱ�400����
		printf("������!");
		else 
		printf("��������!"); 
	}
	else
	{
		c=n%4;
		if(c==0)
		printf("������"); 
		else
		printf("��������");
	}
	return 0;
}
