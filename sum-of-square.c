#include<stdio.h>
int main()
{
    int n;
    double res;
    printf("Enter N: ");
    scanf("%d", &n);
    
    // 1^2 + 2^2 + 3^2 + ... + n^2 = (n/6)*(n+1)*(2*n+1)
    res = (n/6.0) * (n+1) * (2*n+1);

    printf("Result = %.2lf", res);
    return 0;
}