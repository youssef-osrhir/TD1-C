#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, r;
    float Ø;
    scanf("%d%d", &x, &y);
    r = sqrt(x * x + y * y);

    if (x > 0)
    {
        Ø = atan(y / x);
    }
    else if (x < 0)
    {
        Ø = atan(y / x) + M_PI;
    }
    else if (x == 0)
    {
        if (y > 0)
        {
            Ø = M_PI / 2;
        }
        else if (y < 0)
        {
            Ø = -M_PI / 2;
        }
        else
        {
            Ø = 0;
        }
    }

    printf(" les coordonnes polaires sont: r=%d, et Ø=%f\n", r, Ø);
}