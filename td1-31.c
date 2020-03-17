#include <stdio.h>

int main()
{

    
    int i, n, a, b, c;
    a = 1;
    b = 1;
    i = 2;

    scanf("%d", &n);
    while (n < 2)
    {
        scanf("%d", &n);
    }

    while (i <= n)
    {
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    printf("%d \n", c);
}
