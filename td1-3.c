#include <stdio.h>

int main()
{

    int A, a, b, c, n;
    a = 1;
    b = 1;
    int i = 1;
    c = 2;

    scanf("%d", &A);

    while (A >= c)
    {
        c = a + b;
        printf("U%d %d\n", i, c);
        a = b;
        b = c;
        i++;
    }
    printf("%d \n", i - 1);
    //printf("U%d = %d\n", n, c);
}