#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    fact;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("%d! = %d",n,fact(n));
    return 0;
}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
