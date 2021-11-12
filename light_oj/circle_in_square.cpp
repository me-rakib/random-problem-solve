#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
int main()
{
    double pi = 2* acos(0.0), r, ac, as, res;
    int i, n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> r;
        ac = pi * r * r;
        as = 2 * r * 2 * r;
        res = as - ac;
        cout << "Case " << i + 1 << ": " << fixed << setprecision(2) << res << endl;
    }
    return 0;
}