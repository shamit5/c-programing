#include<stdio.h>
#include<string.h>
int main(){
char n[50];
scanf("%s",n);
char c[50] ;
scanf("%s",c);
int i =0;
while(n[i]!='\0'){
    i++;
}
int j =0;
while(c[j]!='\0'){
 n[i] = c[j];;
  i++;
  j++;
}
 n[i] = '\0';
printf("%s",n);

}