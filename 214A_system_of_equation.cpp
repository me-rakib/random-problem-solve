#include <iostream>
using namespace std;
int main()
{
    int n, m, a, b, res = 0;
    cin >> n >> m;
    for (a = 0; a * a <= n && a <= m; a++)
    {
        b = n - a * a;
        if (a + b * b == m)
        {
            res++;
        }
    }
    printf("%d", res);
}