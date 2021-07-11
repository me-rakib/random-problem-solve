#include <iostream>
using namespace std;
int main()
{
    int n, i, r, c, res;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d %d", &r, &c);
        if (r == 1 || c == 1)
        {
            res = r <= c ? c : r;
        }
        else if (r == 2 || c == 2)
        {
            res = ((c * r) / 8) * 4 + (((c * r) % 8) >= 4 ? 4 : ((c * r) % 8));
        }
        else
        {
            res = (r * c + 1) / 2;
        }
        printf("Case %d: %d\n", i, res);
    }
    return 0;
}