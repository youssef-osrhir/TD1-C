#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int m = n;
    int s = 0;

    while (n >= 10)
    {
        s = 0;
        while (n > 0)
        {
            s = s + n % 10;
            n = n / 10;
        }
        n = s;
    }
    printf("la racine digitale de %d est: %d\n", m, n);
}
