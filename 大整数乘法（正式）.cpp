#define MAXLENGTH 1000
#include <stdio.h>
#include <string.h>
void compute(char * a, char * b,char *c)
{
 int i,j,m,n;
 long sum,carry;
 m = strlen(a)-1;
 n = strlen(b)-1;
for(i=m;i>=0;i--)
 a[i] -= '0';
for(i=n;i >=0;i--)
 b[i] -='0';
 c[m+n+2] ='\0';
carry =0;
for(i=m+n;i>=0;i--)
{
 sum=carry;
 if((j=(i-m))<0)
 j=0;
 for(;j<=i&& j <=n;j++)
 sum += a[i-j]*b[j];
 c[i+1] = sum %10 + '0'; 
 carry = sum/10;
}
if((c[0]=carry+'0')=='0') 
 c[0] = '/040'; 
}
int main()
{
 int n,i;
 scanf("%d",&n);
 for(i=0;i<n;i++){
 	char a[MAXLENGTH],b[MAXLENGTH],c[MAXLENGTH*2];
 scanf("%s",&a);
 scanf("%s",&b);
 compute(a,b,c);
 printf("%s\n",c);
}
}
