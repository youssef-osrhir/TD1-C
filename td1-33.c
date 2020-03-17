#include <stdio.h>

int main()
{

    int A, i, a, b, c;
    a = 1;
    b = 1;
    i = 1;
    c = 2;

    scanf("%d", &A);

    while (A >= c)
    {
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    printf("%d \n", i);
}