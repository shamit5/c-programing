#include <stdio.h>
int main()
{
    int n, m;
    printf("enter the temp in celcius\n ");
    scanf("%d", &n);

    m = (n * 9/5)+32;
    printf(" The temp in farenheit %d", m);
}