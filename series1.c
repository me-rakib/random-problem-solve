// sum of 1-2+3-4+5-....n
#include<stdio.h>
int main()
{
    int n, sum=0, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i%2 == 0) 
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }
    printf("Result = %d", sum);
    return 0;
}