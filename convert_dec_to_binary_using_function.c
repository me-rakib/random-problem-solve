#include<stdio.h>
void convert(int n);
int main()
{
    int n;
    printf("Enter any decimal number: ");
    scanf("%d",&n);
    convert(n);
    return 0;
}
void convert(int n)
{
    if(n==0)
        return;
    int r;
    r = n % 2;
    convert(n/2);
    printf("%d",r);
}
