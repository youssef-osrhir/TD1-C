#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main()
{
    float x, y, theta, r;

    scanf("%f %f", &x, &y);

    r = sqrt(x * x + y * y);

    if (x > 0)
    {
        theta = atan(y / x);
    }
    else if (x < 0)
    {
        theta = atan(y / x) + M_PI;
    }
    else
    {
        if (y > 0)
        {
            theta = M_PI / 2;
        }
        else if (y < 0)
        {
            theta = -M_PI / 2;
        }
        else
        {
            theta = 0;
        }
    }

    printf(" les coordonnes polaires sont: r = %f, et theta = %f\n", r, theta);
    //pour avoir le résultat en degrés écrire 180 * theta / M_PI à la place de theta dans printf
}