#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, a[100], sum=0, c=0, op=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a+n);
    sum = sum / 2;
    while(op<=sum)
    {
        c++;
        op += a[n-c];
    }
    cout << c;
    return 0;
}
