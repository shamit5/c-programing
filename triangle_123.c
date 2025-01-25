#include <stdio.h>
int main()
{
    int n,j=1;
    
    printf("enter the value in integer:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
       
        for (int j = 1; i >= j; j++)
        {
            printf("%d",j);
        }
         j++;
        printf("\n");
    }

    return 0;
}
