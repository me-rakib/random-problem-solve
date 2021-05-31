#include<iostream>
#define MAX_SIZE 100
using namespace std;
int main()
{
    int n, x[MAX_SIZE], res[MAX_SIZE];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x[i];
        res[x[i]] = i+1;
    }
    for(int i=1; i<=n; i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}
