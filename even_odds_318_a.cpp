#include<iostream>
using namespace std;
int main() 
{
    long long int k, n, res;
    cin >> n >> k;
    if(k<=(n+1)/2)
    {
        res = 2*k-1;
    }
    else
    {
        res = (k-(n+1)/2)*2;
    }
    printf("%lld",res);
    return 0;
}