#include <iostream>
using namespace std;
int main()
{
    int n, i, j, res = 0, t, d;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        t = 0;
        for (j = 0; j < 3; j++)
        {
            cin >> d;
            if (d == 1)
            {
                t++;
            }
        }
        if (t >= 2)
        {
            res++;
        }
    }
    printf("%d", res);
}