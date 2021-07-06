#include<stdio.h>
#include<math.h>

int sum(int n); 
int main()
{
    int n, res;
    printf("Enter the last number: ");
    scanf("%d", &n);
    res = sum(n);
    printf("Result = %d", res);
    return 0;
}

int sum(int n) 
{
    if(n==1) 
    {
        return 1;
    }
    else 
    {
        return pow(n,n) + sum(n-1);
    }
}