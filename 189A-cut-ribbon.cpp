#include <bits/stdc++.h>

using namespace std;

#define pii pair<int, int>
typedef long long int lli;
int n, sol[4004], t;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fill(sol + 1, sol + 4004, -10000);
    cin >> n;
    for (int i = 0; i < 3; i++)
    {
        cin >> t;
        for (int o = t; o <= n; o++)
        {
            sol[o] = max(sol[o], sol[o - t] + 1);
            printf("%d %d %d\n", o, sol[o], sol[o-t]);
        }
    }
    cout << sol[n];
    return 0;
}