#include <stdio.h>
int main() {
  int n, i,t,j;

 struct StudentType {
 char *name;//���� 
 int Math;//�����ɼ�
 int English;//Ӣ��ɼ�
 int sum;//�ܳɼ�
};
  scanf("%d", &n); //��n������
  for (i = 0; i < n; i++){
 scanf("%s",&name);scanf("%d",&Math);scanf("%d",&English);
 sum=Math+English;
 struct StudentType student[i]={name,Math,English,sum};//��������
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

