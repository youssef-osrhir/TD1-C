#include <stdio.h>

int main()
{


    int a, b, c, n;
    a = 1;
    b = 1;
    int i = 2;

    scanf("%d", &n);
    while (n < 2)
    {
        scanf("%d", &n);
    }

    while (i <= n)
    {
        c = a + b;
        printf("U%d = %d\n", i, c);
        a = b;
        b = c;
        i++;
    }
}
