#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    int catalan[n + 2];
    catalan[0] = catalan[1] = 1;
    for (i = 2; i <= n; i++)
    {
        catalan[i] = 0;
        for (j = 0; j < i; j++)
        {
            catalan[i] += catalan[j] * catalan[i - 1 - j];
        }
    }
    for (i = 0; i <= n; i++)
    {
        printf("%d ", catalan[i]);
    }
    return 0;
}