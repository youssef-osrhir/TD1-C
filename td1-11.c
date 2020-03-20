#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int i = 2;

    scanf("%d", &n);
    int m = n;

    while (n < 2)
    {
        scanf("%d", &n); // c'est pour garantir d'avoir un n > ou égale à 2.
    }

    while (i <= sqrt(n)) //on parcours tous les nombres < ou égale à la racine de n.
    {
        int k;
        /* la boucle for ci-dessous permet de selectionner  
           les nombres premiers < à la racine de n*/

        for (k = 2; k < sqrt(i); k++)
        {

            if (i % k == 0)
            {
                break;
            }
        }

        if (k > sqrt(i) && n % i == 0)
        {

            //si on entre dans ce if sa veut dire que i est premier et divise n,
            //on cherche ensuite combien de i il y'a dans n, ainsi:

            int cpt = 0;
            while (n % i == 0)
            {
                n = n / i;
                cpt++;
                // c'est la variable cpt qui va compter combien de fois on a de i dans n.
                //  et c'est ce qu'on veut trouver la puissance ai d'un certain facteur premier pi.
                // dans notre cas i c'est le pi et ai c'est cpt.
            }

            printf("%d %d\n", i, cpt);
        }

        i++;
    }
    printf("%d 1\n", n);
}
