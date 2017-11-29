#include<stdio.h>
void swapByPointer(int *A, int *B)
{
	int temp;
	temp=*A;
	*A=*B;
	*B=temp;
}
int main()
{
	int A,B;
	scanf("%d",&A);
	scanf("%d",&B);
	swapByPointer(&A,&B);
	printf("%d %d",A,B);
    return 0;
}
    

