#include<stdio.h>
int main()
{
    int n, i, res=0;
    printf("Enter N: ");
    scanf("%d", &n);
    for(i=2; i<n; i++)
    {
        if(n%i == 0) 
        {
            res = 1;
            break;
        }
    }

    if(res == 1)
    {
        printf("Not Prime");
    }
    else 
    {
        printf("Prime");
    }
    return 0;
}