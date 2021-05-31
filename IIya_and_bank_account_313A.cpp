#include<iostream>
using namespace std;
int main()
{
    long long int n, x, i, a[2];
    cin >> n;
    x = n;
    if(n>=10)
    {
        printf("%lld",n);
    }
    else
    {
        for(i=0; i<2; i++)
        {
            a[i] = x % 10;
            x/=10;
        }
        if(a[0]<=a[1])
        {
            n = n/ 10;
        }
        else if (a[0]>a[1])
        {
            n /= 100;
            n *= 10;
            n += a[0];
        }
        printf("%lld",n);
    }
    return 0;
}
