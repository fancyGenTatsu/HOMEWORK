#include<stdio.h>
#include<string.h>
void sortChar(char *p,int n){
	for(int i = 0; i < n - 1; i ++)
	for(int j = i + 1; j < n; j ++)
	if(p[i] > p[j]){
		char temp = p[j];
		p[j] = p[i];
		p[i] = temp;
	}
	for(int h = 0; h < n; h ++)
	printf("%c",p[h]);
	printf("\n");		
}

int main(){
	char string[1000];
	
	fgets(string, 1000, stdin);
	
	int n = strlen(string) - 1;  
	sortChar(string, n);
	
	return 0;
}

