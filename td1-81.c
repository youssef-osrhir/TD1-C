#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int cpt = 1;
    int m = n;
    /*j'ai ajouté la variable "m" pour sauver la valeur de la variable "n" pour l'affichage finale seulement,
    car la valeur de n va etre modifiée lors du traitement dans la boucle while */
    while (n > 10)
    {
        n = n / 10;
        cpt++;
    }

    printf("le nombre de chiffre de %d est: %d\n", m, cpt);
}