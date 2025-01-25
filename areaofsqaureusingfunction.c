#include <stdio.h>
int area(int a);
int main()
{
    int m;
    printf("enter the value of lenght");
    scanf("%d", &m);
    int b = area(m);
    printf("area is:%d", b);
}
int area(int a)
{
    int d;

    d = a * a;

    return (d);
}