/*
cos x = 1 – (x2 / 2 !) + (x4 / 4 !) – (x6 / 6 !) +…
*/

#include <stdio.h>
#include <math.h>

double fact(double n);
int main()
{
    double x, n, i, res = 1, sign = -1, temp;
    printf("Enter n & x: ");
    scanf("%lf %lf", &n, &x);
    x = (acos(-1) * x) / 180;
    for (i = 2; i <= n; i = i + 2)
    {
        temp = pow(x, i) / fact(i);
        if (sign == -1)
        {
            temp *= sign;
            sign = 1;
        }
        else
        {
            temp *= sign;
            sign = -1;
        }
        res += temp;
    }
    printf("cos(%lf) = %lf", x, res);
    return 0;
}

double fact(double n)
{
    double i, res = 1;
    for (i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}