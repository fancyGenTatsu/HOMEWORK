#include<stdio.h>
#include<string.h>
int main()
{
	int s[10];
	int n;
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    float ava;
    struct NumType {
    int n;
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    float ava;
    }num[100];
    int i,j;
    float temp;
    int x;
    for (i = 1; i <=10; i++) {
    	i;
		scanf("%f",&num[i].a);
	    scanf("%f",&num[i].b);
	    scanf("%f",&num[i].c);
		scanf("%f",&num[i].d);
		scanf("%f",&num[i].e);
		scanf("%f",&num[i].f);
		num[i].ava=(num[i].a+num[i].b+num[i].c+num[i].d+num[i].e+num[i].f)/6;//½ÓÊÕÊäÈë
        s[i]=i;
		}
		for(i=1;i<=10;i++)
	    {
		for(j=1;j<=10-i;j++)
		{
			if(num[j].ava<num[j+1].ava)
			{
				temp=num[j].ava;
				num[j].ava=num[j+1].ava;
				num[j+1].ava=temp;
				x=s[j+1];
				s[j+1]=s[j];
				s[j]=x;
			}
		}
		}
	for(i=1;i<=10;i++){
		printf("%d %.2f\n",s[i],num[i].ava);
	}
	return 0;
}
