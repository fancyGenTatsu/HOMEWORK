#include <stdio.h>
int main() {
  int n, i,t,j;

 struct StudentType {
 char *name;//姓名 
 int Math;//高数成绩
 int English;//英语成绩
 int sum;//总成绩
};
  scanf("%d", &n); //有n组数据
  for (i = 0; i < n; i++){
 scanf("%s",&name);scanf("%d",&Math);scanf("%d",&English);
 sum=Math+English;
 struct StudentType student[i]={name,Math,English,sum};//接收输入
 } 
 t=d[0];
 for(j=0;j<n;j++)
 {
 	if(d[j]>t)
 	{
 		t=d[j];
	}
 }
 printf("%d",t);
 return 0;
  }

