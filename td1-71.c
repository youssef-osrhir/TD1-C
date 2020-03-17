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

    if (n == 1 || n==4) /*j'ai ajouté le cas 4 car c'est le seul cas ou i serait égale à sqrt(n) après un break de la boucle for,
                          on aura alors 4 premier alors qu'il ne l'est pass */
    {
        printf("%d n'est pas premier\n", n);
    }
    
    else
    {
        for (i = 2; i < sqrt(n); i++)
        {
            if (n % i == 0)
            {
                printf("%d n'est pas premier\n", n);
                break;
            }
        }

        if (i >= sqrt(n))
        {
            printf("%d est premier\n", n);
        }
    }
}
