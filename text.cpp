#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char a[100];
		char b[7][53]={
"*****    ************   **************************",
"*   *    *    *    **   **    *        **   **   *",
"*   *    *    *    **   **    *        **   **   *",
"*   *    **************************    ***********",
"*   *    **        *    *    **   *    **   *    *",
"*   *    **        *    *    **   *    **   *    *",
"*****    ***********    ***********    ***********"
 } ;
        scanf("%s",a);
        for(int j=0;j<strlen(a);j++){
        	printf("%c",a[j]);
		}
		printf(":\n");
    for(int j=0;j<7;j++){
    	for(int k=0;k<strlen(a);k++){
    		int p;
    		p=a[k]-'0';
    	    for(int q=5*p;q<5*(p+1);q++){
    	    	printf("%c",b[j][q]);
			}
			printf("  ");
		}
		printf("\n");
	}
}
    printf("\n");
	return 0;
} 
