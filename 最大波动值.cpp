#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,max;
	int a[1000]; 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
    max=fabs(a[1]-a[0]);
if(fabs(a[i]-a[i-1])>max);
max=fabs(a[i]-a[i-1]);
    printf("%d",max);
	return 0;
}
