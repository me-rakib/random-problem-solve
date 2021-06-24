#include<stdio.h>
int main()
{
    int n, i, even=0, odd;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++) 
    {
        scanf("%d", (arr+i));
        if(*(arr+i) % 2 == 0) 
        {
            even++;
        }
    }
    odd = n - even;
    if(even>odd) 
    {
        for(i=0; i<n; i++) 
        {
            if(*(arr+i) % 2 != 0) 
            {
                printf("%d", i+1);
                break;
            }
        }
    }
    else 
    {
        for(i=0; i<n; i++) 
        {
            if(*(arr+i) % 2 == 0) 
            {
                printf("%d", i+1);
                break;
            }
        }
    }
    return 0;   
}