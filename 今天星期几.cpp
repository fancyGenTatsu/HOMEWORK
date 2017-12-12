#include <stdio.h> 
int main() 
{ 
 int year,month,day; 
 int tempmonth,yearday; 
 int week,weekday; 
 int sum=0; 
 int tag=0; 
 scanf("%d-%d-%d",&year,&month,&day); 
 tag =( year - 1900 )/4;  
 sum=(year-1900)*365 + tag; 
 tempmonth = month - 1; 
 yearday = 0; 
 switch(tempmonth) 
 { 
 case 12:yearday+=31; 
 case 11:yearday+=30; 
 case 10:yearday+=31; 
 case 9:yearday+=30; 
 case 8:yearday+=31; 
 case 7:yearday+=31; 
 case 6:yearday+=30; 
 case 5:yearday+=31; 
 case 4:yearday+=30; 
 case 3:yearday+=31; 
 case 2:yearday+=28; 
 case 1:yearday+=31; 
 } 
 yearday = yearday+day; 
 
 if ((year-190)%4==0 && month > 2) 
 { 
  yearday+=1; 
 } 
 sum=sum+yearday;  
 weekday = (sum-1) % 7+1;
 if(weekday==1)
 printf("Monday\n");
 if(weekday==2)
 printf("Tuesday\n");
 if(weekday==3)
 printf("Wendesday\n");
 if(weekday==4)
 printf("Thursday\n");
 if(weekday==5)
 printf("Friday\n");
 if(weekday==6)
 printf("Saturday\n");
 if(weekday==7)
 printf("Sunday\n"); 
 return 0; 
}

