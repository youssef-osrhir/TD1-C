#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i;

    while (n < 0) //Cet boucle while garantit d'avoir un n positif dans notre traitement
    {
        scanf("%d", &n);
    }

    if (n == 1)
    {
        printf("%d n'est pas premier\n", n);
    }

    else
    {
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                printf("%d n'est pas premier\n", n);
                break;
            }
        }

        if (i > sqrt(n))
        {
            printf("%d est premier\n", n);
        }
    }
}
