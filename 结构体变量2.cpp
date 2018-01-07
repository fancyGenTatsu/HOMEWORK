#include<stdio.h>
#include<string.h>
int main()
{
	char Name[10];
    int m;
    int e;
    int sum;
    char temp_[100];
	struct StudentType {
    char Name[10];//姓名
    int m;//高数成绩
    int e;//英语成绩
    int sum;//总成绩
    }stu[100];
    int n,i,j,temp;
    scanf("%d", &n);  // 有n组数据
    for (i = 0; i < n; i++) {
    	scanf("%s",stu[i].Name);
	    scanf("%d",&stu[i].m);
	    scanf("%d",&stu[i].e);//接收输入
        stu[i].sum=stu[i].m+stu[i].e;
        }
    for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(stu[j].sum>stu[j+1].sum)
			{
				temp=stu[j+1].sum;
				stu[j+1].sum=stu[j].sum;
				stu[j].sum=temp;
				strcpy(temp_,stu[j].Name);
				strcpy(stu[j].Name,stu[j+1].Name);
				strcpy(stu[j+1].Name,temp_);
			}
		}
	}
	for(i=n-1;i>=0;i--){
		printf("%s %d\n",stu[i].Name,stu[i].sum);
	}
	return 0;
}
