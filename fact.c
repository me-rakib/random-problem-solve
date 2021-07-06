#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int res = fact(n);
    printf("%d! = %d",n,res);
    return 0;
}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n * fact(n-1);
}
