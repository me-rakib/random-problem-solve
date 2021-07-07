/*
Print the following pattern
         1
       1 2 1
     1 2 3 2 1
   1 2 3 4 3 2 1
 1 2 3 4 5 4 3 2 1

*/
#include<stdio.h>
int main()
{
    int n, space, num=1, i, j;
    printf("Enter N: ");
    scanf("%d", &n);
    space = n-1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=space; j++)
        {
            printf("  ");
        }
        for(j=1; j<=i; j++)
        {
            printf(" %d", j);
        }
        for(j=i-1; j>0; j--)
        {
            printf(" %d", j);
        }
        space -= 1;
        printf("\n");
    }
}