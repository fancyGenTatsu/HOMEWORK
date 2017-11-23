#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,i=0,j=0,k=0,m=0,l=0;
	int a[20];
	int b[20];
	scanf("%d",&n);
	x=n;
while(x)
{
	a[i]=x%10;
	i++;
	x=x/10;
	l++;
}
	for(j=0;j<l;j++)
	{
		b[j]=a[l-1-j];
	}
    for(m=0;m<l;m++)
    {
	if(a[m]==b[m])
	   k++;
	}
    if(k==l)
    printf("Yes");
    else
	printf("No");
	return 0;
}
