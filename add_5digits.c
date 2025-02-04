
#include <stdio.h>

int main() {

int n , p=10 , r=0; 
printf("enter the number:");
scanf("%d",&n);
 while(n>0){
   int f=n%10;
    r=r+f;
    n=n/10;
     
 }
 printf("sum of 5 digit number is %d:",r);
    return 0;
}