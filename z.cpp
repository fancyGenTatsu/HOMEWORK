 #include<stdio.h>
int main()
{
	int k,i,j,x;
	scanf("%d",k);
	for(i=0;i<k;i++)
	{
	scanf("%d",x);
    for(j=2;j<=x;j++)
      {
    	  while(x!=1)
    	  {
    	  	if(x%j==0)
    	  	{
    	  		printf("%d",j);
    	  		x=x/j;
			  }
		    else break;
		  }
	  }
	}
	printf("%d",x);
	return 0;
}
