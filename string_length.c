#include<stdio.h>
int main(){
char arr[40];
for(int i=0;i>40;i++){
    scanf("%c",&arr[i]);
}
int i =0;
int j =0;
 while(arr[i]!='\0'){
printf("%c",arr[i]);
 i++;

  if(arr[i]=='a'||arr[i]== 'e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
    j++;
  }

}
printf("%d\n",i);
printf("%d",j);  

  
  

}