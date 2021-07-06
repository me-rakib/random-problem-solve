#include<stdio.h>
int d_sum(int n);
int main()
{
    int num = 12345;
    int sum = d_sum(num);
    printf("%d",sum);
    return 0;
}
int d_sum(int n)
{
    if(n==0)
        return;
    int r = n % 10;
    return r + d_sum(n/10);
}
