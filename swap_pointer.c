#include<stdio.h>
void swap(int* a , int* b){
  int temp = *a;
  *a = *b;
  *b=temp;


}
int main(){
int a = 25;
int b = 15;
int* pt = &a;
int* prt = &b;
printf("%p\n",pt);
printf("%p\n",prt);
swap(&a,&b);
printf("%d\n%d\n",a,b);
printf("%d\n",*prt);

}