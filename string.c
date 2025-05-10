#include<stdio.h>


int main()
{
  char str1[50]="shamit";
  char str2[50]="saha";
  int i =0;
  int j =0;
  while(str1[i]!='\0'){
  i++;
  }
  
  while(str2[j]!='\0'){
    str1[i]=str2[j];
    i++;
    j++;
  }
    printf("Concatenated string: %s\n", str1-32);

}