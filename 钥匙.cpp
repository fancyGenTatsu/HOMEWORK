#include<stdio.h>
#include<string.h>
int main()
{
	int N,K,w[1000],s[1000],c[1000],i,x[1000],t,j,b[1000],m,n;
	scanf("%d%d",&N,&K);
	int a[N-1];
	for(i=0;i<K;i++)
	{
		scanf("%d%d%d",&w[i],&s[i],&c[i]);//s[i]+c[i]还钥匙的时刻 
	}
   	for(i=0;i<K;i++)
    {
       b[i]=s[i];
    }
	for(i=0;i<K;i++)
    {
    	     if(x[i]>x[i+1])
			{
				t=b[i];
    		    b[i]=b[i+1];
    	        b[i+1]=t;//第一个被借走的钥匙借走时刻 
			} 
	}
	for(i=0;i<K;i++)
    {
       x[i]=s[i]+c[i];
    }
    for(i=0;i<K;i++)
    {
    	if(x[i]>x[i+1])
    	{
    		t=x[i];
    		x[i]=x[i+1];
    		x[i+1]=t;//xi为还钥匙从早到晚排序 
		}
	}
	for(i=0;i<K;i++)
	{
		for(j=0;j<K;j++)
		{
			if(x[i]<b[j])
			{
			m=0;
			while(b[j]!=s[m])
			{
				m++;
			}
			while(x[i]!=(s[n]+c[n]))
			{
				n++;
			}
			
			=w[n];
			break;
			}
		}
	}
	

for(i=0;i<N;i++)//输出数组 
{
	printf("%d ",a[i]);
}
}
