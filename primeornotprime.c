#include<stdio.h>
int main(){
int isprime =1;
int n ;
scanf("%d",&n);
for (int i =2; i<n ; i++){
    if( n%i == 0){
    isprime = 0;
    break;}
}
 if(isprime == 1){
    printf("it is a prime number");
 }
 else{
    printf("it is not a prime number");
 }

}