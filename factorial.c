#include<stdio.h>
int main()
{
    int n, i , fact=1;
    scanf("%d", &n);
    printf("%d\n",n);
    if(n<0 || n>7)
    {
        printf("-1\n");
    }
    else
    {
        for(i=1; i<=n; ++i)
        {
            fact *= i;
        }
        printf("%d", fact);
    }
    return 0;
}
