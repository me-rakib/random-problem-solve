#include<stdio.h>
void display(int n);
int main()
{
    int n;
    scanf("%d",&n);
    display(n);
    return 0;
}
void display(int n)
{
    int r;
    if(n==0)
        return;
    r = n % 10;
    printf("%d ",r);
    display(n/10);
}
