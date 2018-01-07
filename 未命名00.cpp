#include<stdio.h> 
#include<math.h> 
#include<string.h> 
int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
int main(){ 
 int a[1009]; 
 int n,t,ans=-1; 
 scanf("%d",&n); 
 for(int i=0;i<n;i++){ 
 scanf("%d",&a[i]); 
 } 
  for(int i=1;i<n;i++){ 
 t=fabs((a[i]-a[i-1])); 
 ans=max(ans,t); 
 } 
 printf("%d\n",ans);
 return 0; 
}  
