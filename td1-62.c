#include <stdio.h>

int main()
{
    int a;
    int i = 1;
    int s = 0;
    int n;
    a = 3;
    int cpt = 0;

    //scanf("%d", &a);
    scanf("%d", &n);

    while (cpt < n)
    {
        i = 1;
        s = 0;
        while (i < a)
        {
            if (a % i == 0)
            {
                s = s + i;
            }
            i++;
        }

        if (s == a)
        {
            printf("%d est un nombre parfait\n", a);
            cpt++;
        }

        a++;
    }
}