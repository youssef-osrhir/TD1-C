#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float A;

    scanf("%f", &A);

    float x = A;

    while (abs(x - sqrt(A)) > 1e-3)
    {
        x = 0.5 * (x + A / x);
        printf("%f\n", x - sqrt(A));
    }

    printf("l'approximation de la racine de %f est: %f\n", A, x);
}
