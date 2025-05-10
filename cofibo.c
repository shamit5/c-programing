#include<stdio.h>
void fibo(int n ){
    int a =0 ,b=1 , nextterm;
 for(int i =0; i<n; i++){
    printf("%d ",a);
    nextterm = a+b;
    b=a;
    a=nextterm;
 }

}

int main(){

int n ;
scanf("%d",&n);
fibo(n);

}




