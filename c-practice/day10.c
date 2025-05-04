#include <stdio.h>
int main()
{
    int a = 2, b;
    b = a++ + a++ + a++;
    printf("a= %d b=%d", a, b);
    a = 2;
    b = ++a + ++a + ++a;
    printf("a= %d b=%d", a, b);
}