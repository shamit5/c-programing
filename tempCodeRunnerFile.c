#include<stdio.h>
int fac(int n){
    if (n == 0 || n == 1)
        return 1;  
  return n*fac(n-1);
}

int nCr( int n ,int r){
   return fac(n)/(fac(r)*fac(n-r));

}



int main(){
    int n , r ;
    scanf("%d",&n);
     scanf("%d",&r);
 int f = fac(n);
 int m = nCr(n,r);
 printf("%d",m);
 printf("%d",f);
return 0;



}
