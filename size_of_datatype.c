#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    double d;
    long e;
    long long f;

    printf(" size of integer %d bytes\n", sizeof(a));
    printf(" size of float %d bytes\n", sizeof(b));
    printf(" size of char %d bytes\n", sizeof(c));
    printf(" size of double %d bytes\n", sizeof(d));
    printf(" size of long %d bytes\n", sizeof(e));
    printf(" size of longlong %d bytes\n", sizeof(f));

    return 0;
}