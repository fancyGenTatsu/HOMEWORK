#include<stdio.h>
int main()
{
	int a[3];int b[3];int c[6];
    a[0]=1;a[1]=3;a[2]=5;
    b[0]=2;b[1]=4;b[2]=6;
    c[0]=a[0];
    c[1]=b[0];
    c[2]=a[1];
    c[3]=b[1];
    c[4]=a[2];
    c[5]=b[2];
    int i;
    for(i=0;i<6;i++)
	{
	printf("%d ",c[i]);
    }
    return 0;
} 
