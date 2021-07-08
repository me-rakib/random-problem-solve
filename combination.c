#include <stdio.h>

int fact(int n);
int main()
{
    int n, r;
    double res;
    printf("Enter n & r: ");
    scanf("%d %d", &n, &r);

    if (n >= r)
    {
        // nCr
        res = fact(n) / (double)(fact(r) * fact(n - r));
        printf("%dC%d = %.2lf", n, r, res);
    }
    else
    {
        printf("Math Error");
    }
    return 0;
}

int fact(int n)
{
    int i, mul = 1;
    for (i = 1; i <= n; i++)
    {
        mul *= i;
    }
    return mul;
}