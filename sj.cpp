# include<stdio.h>
# include<float.h>
int main(){
	int x=2.2;
	short y=0x7fff;
	short z=0xffff;
	unsigned short w=0xffff;
	float u=0.177;
	printf("%d\t%d\t%d\t%d\t%f\t",x,y,z,w,u);
    printf("MAX=%f\tMIN=%f",DBL_MAX,DBL_MIN);
    return 0;
}

