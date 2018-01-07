#include<stdio.h>
#include<math.h>
int main()
{
int n,i;
	float x,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&x);
	 if(x>=0)
      {
	     m=sqrt(x);
	     printf("%.2f\n",m);
      }
      else
	  printf("ERROR");
    }
    return 0;
}
