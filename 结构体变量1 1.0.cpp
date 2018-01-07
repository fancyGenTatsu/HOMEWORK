#include <stdio.h>
int main() {
  int n,i,t,j;
  int a,b,c;
  int d[10];
 scanf("%d",&n); //有n组数据
for(i=0;i<n;i++){
 scanf("%d %d %d",&a,&b,&c);
 d[i]=a+b+c;
} 
 t=d[0];
 for(j=0;j<n;j++)
 {
 	if(d[j]>t)
 	{
 		t=d[j];
	}
 }
 printf("%d\n",t);
 return 0;
  }
