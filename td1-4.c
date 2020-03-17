#include <stdio.h>

int main()
{
    int n;
    int Spair = 0;
    int Simpair = 0;

    scanf("%d", &n);

    while (n != 0)
    {

        if (n % 2 == 0)
        {
            Spair = Spair + n;
        }
        else
        {
            Simpair = Simpair + n;
        }

        scanf("%d", &n);
    }
    printf("La somme paire est de : %d et la somme impaire est de :%d\n", Spair, Simpair);
}
