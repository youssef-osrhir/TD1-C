#include <stdio.h>

int main()
{
   
    int a;
    int i = 1;
    int s = 0;

    scanf("%d", &a);

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
    }

    else
    {
        printf("%d n'est pas un nombre parfait\n", a);
    }
}
