#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		int j;
		for(j=1;j<=m;j++)
		{
		int a,b,c;
		int d,e,f;
				for(a=0;a<=j;a++){
				for(b=0;b<=j;b++){
				for(c=0;c<=j;c++){
							d=pow(2,a);
							e=pow(3,b);
							f=pow(5,c);
                        	if(d*e*f==j)
							printf("%d ",j);
						}
					}
				}
			}

		printf("\n");
	}
	return 0;
}
