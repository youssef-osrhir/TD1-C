#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int m = n;
    int s = 0;

    while (n > 0)
    {
        s = s * 10 + n % 10;
        n = n / 10;
    }
    printf("le nombre %d inverse est: %d\n", m, s);
}
