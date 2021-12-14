#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n, k, i, num, temp, res = 0;
    vector<int> v;
    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    temp = v[k - 1];
    {
        for (i = 0; i < n; i++)
        {
            if (v[i] >= temp & v[i] != 0)
            {
                res++;
            }
        }
        cout << res;
    }
}