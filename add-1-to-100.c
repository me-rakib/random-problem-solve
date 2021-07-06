#include<stdio.h>

int add(int a, int b);
int main()
{
    int sum=0, i;
    for(i=1; i<=5; i++) {
        sum = add(sum, i);
    }
    printf("%d ",sum);
    printf("\nHEllo");
}

int add(int a, int b)
{
    return a + b; 
}