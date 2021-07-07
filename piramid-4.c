/*
Print the following piramid 
         *
       * * *
     * * * * *
       * * *
         *
*/

#include<stdio.h>
int main()
{
    int n, i, j, space, num = 1;;
    printf("Enter N: ");
    scanf("%d", &n);
    space = n-1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=space; j++)
        {
            printf("  ");
        }
        for(j=1; j<=num; j++)
        {
            printf(" *");
        }
        if(space>i) 
        {
            space -= 1;
            num += 2;
        }
        else if(space<i)
        {
            space += 1;
            num -= 2;
        }
        printf("\n");
    }
    return 0;
}