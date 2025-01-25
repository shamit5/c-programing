#include<stdio.h>
int main(){
int num,grnum,count;
num=0;
grnum=0;
printf("enter 10 number");
for(count=1; count<11; count++ ){
scanf("%d",&num);
if(num>grnum)
{grnum=num;}



}
printf("greatest number is:%d",grnum);
return 0 ;


}