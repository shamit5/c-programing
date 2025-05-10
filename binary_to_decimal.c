#include <stdio.h>

int main()
{
 int n;
 int p[32];
 int i=0;
 scanf("%d",&n);
 
  while(n>0){
      p[i]=n%2;
      n=n/2;
      i++;
      
  }
for(int m = i-1;m>=0;m--){
printf("%d",p[m]);}



 scanf("%d",&n);
   int decimal=0 , base=1 ;
   while(n>0){
      int j = n%10;
       decimal=decimal + base*j;
       n=n/10;
       base=base*2;
       
       
       
   }
    printf("%d",decimal);
   
return 0;
}