#include<stdio.h>
#include<math.h>
#include<string.h>

void op_out( int order, int n, int store[], int control[]){
	
	if(order == n) return;       //���ڷ��صݹ�
	
	control[order] = 1;            //��Ӧ��λ�� 1 ���  
	op_out(order + 1, n, store, control);
	  
	printf("-->");             //�����������������
	for(int u = 0; u < n; u++) if(control[u]) printf(" %d",store[u]);   
	printf("\n");
	
        control[order] = 0;          //��Ӧ��λ�� 0 �����
        op_out(order + 1, n, store, control);
    
	order--;
	
	if(order == n) return;      //���ڽ�������
}

int main(){
	int m, n;
	scanf("%d",&m);
	
	for(int i = 0; i < m; i++){
		int store[100] = {0}, control[100] = {0};
		
		scanf("%d",&n);
		for(int j = 0; j < n; j++) scanf("%d",&store[j]);
		
		int order = 0;
		op_out(order, n, store, control);
		printf("--> \n");
	}
	
	return 0;
}

