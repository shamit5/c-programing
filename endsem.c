#include<stdio.h>
int main()
{
    int arr[] = {3,56,23,76,1,87,5,9};
    int n =8, temp;
for (int j =0 ; j<n-1; j++)
{
   for (int i =0 ; i<n-1; i++)
   {
    if (arr[i]<arr[i+1])

    { 
        
        temp = arr[i];
         arr[i] =arr[i+1] ;
        arr[i+1]=temp;
    
    }



}
 




}
for(int i =0 ; i<8; i++){
printf(" %d",arr[i] );
}

}