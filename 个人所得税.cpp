#include<stdio.h>
int main()
{
	int n;
	float x;
	scanf("%d",&n);
	if(n<=3500)
	x=0;
	else
	{
		if(n<=5000)
		x=(n-3500)*0.03;
		else
		{
			if(n>5000&&n<=8000)
			x=45+(n-5000)*0.1;
			else
			{
				if(n>8000&&n<=12500)
				x=345+(n-8000)*0.2;
				else
				{
					if(n>12500&&n<=38500)
					x=1245+(n-12500)*0.25;
					else
					{
						if(n>38500&&n<=58500)
						x=7745+(n-38500)*0.3;
						else
						{
							if(n>58500&&n<=83500)
							x=13745+(n-58500)*0.35;
							else
							x=22495+(n-80000)*0.45;
						}
					}
				}
			}
		}
	}
	printf("%.2f",x); 
    return 0;
}
