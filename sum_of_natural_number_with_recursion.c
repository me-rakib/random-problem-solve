#include<stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Last number: ");
    scanf("%d",&n);
    int total = sum(n);
    printf("Total = %d",total);
    return 0;
}
int sum(int n)
{
    if(n==0)
        return 0;
    else
        return n + sum(n-1);
}
