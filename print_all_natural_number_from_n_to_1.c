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
    if(n==0)
        return;
    printf("%d \n",n);
    display(n-1);
}
