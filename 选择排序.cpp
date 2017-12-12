#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<(n-1);i++){
		    int t,u=i,v;
            t=a[i];
		for(int j=i;j<n;j++){
	        if(t>a[j]){
                u=j;
           	    t=a[j];
			}
		}
			v=a[i];
			a[i]=a[u];
			a[u]=v;
		for(int k=0;k<n;k++){
			printf("%d ",a[k]);
		}
		printf("\n");
	}
	return 0;
}

