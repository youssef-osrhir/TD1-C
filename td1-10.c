#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);

    int u = n;
    int cpt = 0;

    while (cpt < 2)
    {

        if (u % 2 == 0)
        {
            u = u / 2;
        }
        else
        {
            u = 3 * u + 1;
        }

        printf("%d\n", u);

        if (u == 1)
        {
            cpt++;
        }
    }
}