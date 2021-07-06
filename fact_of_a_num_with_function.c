#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int res = fact(n);
    printf("%d",res);
    return 0;
}
int fact(int n)
{
    int i, f=1;
    for(i=1; i<=n; i++)
    {
        f *= i;
    }
    return f;
}
