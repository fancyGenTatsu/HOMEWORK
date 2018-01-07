#include<stdio.h>
int main()
{
int a[10];
int i, j, n, t;

scanf("%d", &n);

for (i = 0; i<10; i++)
{
scanf("%d", &a[i]);
}
for (i = 9;i>n-1; i--)
{
t = a[9];
for (j = 9;j>0; j--)
{
a[j] = a[j-1];
}
a[0] = t;
}

for (i = 0; i < 10; i++)
{
printf("%d ",a[i]);
}
printf("\n");
return 0;
}

