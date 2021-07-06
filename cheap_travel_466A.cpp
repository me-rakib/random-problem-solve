#include<iostream>
using namespace std;
int main()
{
    int n, m, a, b, c, d, res;
    scanf("%d %d %d %d", &n, &m, &a, &b);
    if((m*a)<=b)
    {
        res = n*a;
    }
    else
    {
        res = (n/m)*b + min((n%m)*a, b);
    }
    printf("%d",res);
}
