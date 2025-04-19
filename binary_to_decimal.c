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
return 0;
}