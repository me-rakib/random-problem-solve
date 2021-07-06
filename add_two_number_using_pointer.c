#include<stdio.h>
void add(int *n1, int *n2);
int main()
{
    int n1, n2;
    n1 = 10;
    n2 = 20;
    add(&n1, &n2);
    return 0;
}
void add(int *n1, int *n2)
{
    printf("Total = %d\n",*n1+*n2);
    printf("Difference = %d\n",*n1-*n2);
    printf("Product = %d\n",*n1 * *n2);
    printf("Quotient = %d\n",*n1 / *n2);
}
