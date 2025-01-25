#include <stdio.h>
int main()
{
    int n;
    printf("enter the value in integer:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; i >= j; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
