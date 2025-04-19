#include <stdio.h>
int main (){
int n ;
int i =1;
int j = 0;
int k;
scanf("%d",&n);
for(int b =1;b<n;b++){
printf("%d ",i);
k=i+j;
j=i;
i = k;
}

}