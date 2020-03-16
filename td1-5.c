#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    int q = 0;
    int r = 0;
    int s = b;

    while (s <= a)
    {
        s = s + b;
        q++;
    }
    s = s - b;
    r = a - s;

    printf("Le quotient est :%d le reste est : %d\n", q, r);
}