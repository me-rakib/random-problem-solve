#include<iostream>
#include<math.h>
using namespace std;
int fact(int i);
int main()
{
    int x, n, i;
    float res, sum=1;
    printf("Enter x and n: ");
    scanf("%d %d",&x, &n);
    for(i=1; i<=n; i++)
    {
        res = pow(x,i)/fact(i);
        sum += res;
    }
    printf("Result = %.2f",sum);
    return 0;
}
int fact(int n)
{
    if(n>1)
        return n * fact(n-1);
    else
        return 1;
}
