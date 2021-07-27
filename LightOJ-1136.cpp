#include <iostream>
using namespace std;

int divide_by_3(int n);

int main()
{
    int n, a, b, res, i;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> a >> b;
        res = divide_by_3(b) - divide_by_3(a - 1);
        cout << "Case " << i << ": " << res << endl;
    }
    return 0;
}

int divide_by_3(int n)
{
    int ans;
    ans = (n / 3) * 2;
    if (n % 3 == 2)
    {
        ans += 1;
    }
    return ans;
}