#include<stdio.h>

int sum(int ini, int current, int n);
int main()
{
    int n, res;
    printf("Enter n: ");
    scanf("%d", &n);
    res = sum(1, 1, n);
    printf("Result = %d", res);
    return 0;
}

int sum(int ini, int current, int n)
{
    int i, mul=1;
    if(current == n+1)
    {
        return 0;
    }
    else 
    {
        for(i=ini; i<ini+current; i++) 
        {
            mul *= i;
        }
        return mul + sum(i, current+1, n);
    }
}