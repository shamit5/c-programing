#include <stdio.h>
int main()
{
    int n;
    char f= 'A';
    printf("enter the value in integer:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
       
        for (int j = 1; i >= j; j++)
        {
            printf("%c",f);
        }
         f++;
        printf("\n");
    }

    return 0;
}
