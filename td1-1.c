#include <stdio.h>

int main()
{


    int A;
    int c = 0;
    /*déclaration de la variable "A" 
 qui va permettre plustard de stocker 
 l'année entrée par l'utilisateur*/

    scanf("%d", &A);
    /* la fonction scanf va permettre
 l'affectation après execution de la variable A en stockant 
 dedans l'année entrée par l'utilisateur*/

    /*on traite tout d'abord
    le cas de A non divisible par 4 qui donne
     bien sur  A non bisextile*/
    if (A % 4 != 0)
    {
        printf("%d n'est pas bisextile\n", A);
    }

    /* Ensuite le else if balaye tous les cas ou
    A non divisible par 4, reste maintenant les deux cas
    avec A divisible par 4:
    1.A divisible par 100 ET pas par 400
    2.A non divisible par 100 OU divisible par 400

    le cas 2 est juste le contraire logique du cas 1.
    Le premier else if traite le cas 1 et le dernier else
    traite le cas 2 qui est le reste de tous les conditions posées avant. */
    else if (A % 100 == 0 && A % 400 != 0)
    {
        printf("%d n'est pas bisextile\n", A);
    }

    else
    {
        printf("%d est bisextile\n", A);
    }
}
