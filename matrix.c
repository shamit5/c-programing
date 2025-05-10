#include<stdio.h>
int main(){
int arr[3][3];
int brr[3][3];
int mrr[3][3];
int srr[3][3];
printf(" pls provide first matrix  \n");
for(int i = 0 ; i<3; i++)
{
  for(int n = 0 ; n<3; n++)
    { 
        scanf("%d",&arr[i][n]) ;}
  
}

printf("first matrix is given below \n");
 for(int i = 0 ; i<3; i++)
{
  for(int n = 0 ; n<3; n++)
    { printf("%d ",arr[i][n]) ;}
     printf("\n");
}
 

 printf(" pls provide second matrix  \n");
for(int i = 0 ; i<3; i++)
{
  for(int n = 0 ; n<3; n++)
    { 
        scanf("%d",&brr[i][n]) ;}
  
}

printf(" second is given below \n");
 for(int i = 0 ; i<3; i++)
{
  for(int n = 0 ; n<3; n++)
    { printf("%d ",brr[i][n]) ;}
     printf("\n");
}

 for(int i = 0 ; i<3; i++)
{
  for(int n = 0 ; n<3; n++)
    { mrr[i][n]=arr[i][n]+brr[i][n];
    }
}
 for(int i = 0 ; i<3; i++)
{
  for(int n = 0 ; n<3; n++)
    { mrr[i][n]=arr[i][n]*brr[i][n];
    }
}


 
 
printf(" addition  is given below \n");
 for(int i = 0 ; i<3; i++)
{
  for(int n = 0 ; n<3; n++)
    { printf("%d ",mrr[i][n]) ;}
     printf("\n");

}
}