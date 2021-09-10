#include <iostream>
using namespace std;
int main()
{
    int n, x, i, s1, s2, t = 1, r = 0;
    cin >> n >> x;
    for (i = 0; i < n; i++)
    {
        cin >> s1 >> s2;
        t += x * ((s1 - t) / x);
        r += s2 - t + 1;
        t = s2 + 1;
    }
    cout << r << endl;
}