#include <stdio.h>
int main()
{
    int n,j=1;
    
    printf("enter the value in integer:\n");
    scanf("%d", &n);
     int a=1;
    for (int i = 1; i <= n; i++)
    {
       
        for (int j = 0; i > j; j++)
        {
            printf("%d",a);
          a++;
        }
         
        printf("\n");
    }
        
    return 0;
}
