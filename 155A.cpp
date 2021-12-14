#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int i, j, n, mn, mx, res = 0, temp, num;
    vector<int> v;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    mn = v[0];
    mx = v[0];

    for (i = 0; i < n; i++)
    {
        if (v[i] > mx)
        {
            mx = v[i];
            res++;
        }
        if (v[i] < mn)
        {
            mn = v[i];
            res++;
        }
    }
    cout << res;
    return 0;
}