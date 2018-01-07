#include<stdio.h>
int main()
{
int i, j, n, m, t,x,k,temp;
int a[100];
scanf("%d%d", &m, &n);
scanf("%d",&x);
for (i = 0; i<m; i++)
{
scanf("%d", &a[i]);
}
   if(x==1)
 {
	for (i = m - 1;i>n-1; i--)
      {
          t = a[m-1];
          for (j = m-1;j>0; j--)
              {
                 a[j] = a[j-1];
              }
          a[0] = t;
      }
 }
else
{
	for(i=0;i<n;i++)
{
temp=a[0];

for(j=0;j<m-1;j++)
a[i]=a[i+1];
a[m-1]=temp;
}
}

for (i = 0; i < m; i++)
{
printf("%d ",a[i]);
}
return 0;
}
