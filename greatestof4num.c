
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("please enter the number: \n ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf(" you input  the numbers: %d %d %d %d\n", a, b, c, d);
    if (a > b && a > c && a > d)
    {
        printf(" greastest of  number is:%d \n", a);
    }

    else if (b > a && b > c && b > d)
    {
        printf(" greastest of number is: %d \n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf(" greastest of number is: %d \n", c);
    }

    else
    {
        printf(" greastest of number is: %d\n ", d);
    }

    return 0;
}