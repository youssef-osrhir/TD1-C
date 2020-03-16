#include <stdio.h>
#include <math.h>

int main()
{

    int i, m, n;
    scanf("%d", &m);
    n = 2;
  
    while (n < m)
    {
            for (i = 2; i < sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    break;
                }
            }

            if (i > sqrt(n))
            {
                printf("%d \n", n);
            }
            
            
             n++;
    }
}