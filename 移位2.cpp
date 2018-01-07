#include<stdio.h> 
int main(){
	int n,m,x;
	scanf("%d%d",&m,&n);
	scanf("%d",&x);
	int a[m],b[m];
	for(int i = 0; i < m; i++){
	scanf("%d",&a[i]);
}
    for(int i = 0; i < m; i++){
		b[i] = a[i];
}
    if(x==1){
	    for(int i = 0; i < m; i++){
		if((i + n )<= (m-1)){
			a[i]=b[i + n];
		}
		else{
		    a[i]=b[i + n - m];
	    }
    }
	}
	if(x==0){
        for(int i = 0; i < m; i++){
        if(i>=n){
        	a[i]=b[i-n];
		}
		else{
			a[i]=b[i+m-n];
		}
	}
}
	for(int i = 0; i < m; i++){
	    printf("%d ",a[i]);
    }    
    printf("\n");
	return 0;
}

