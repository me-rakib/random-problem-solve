#include <iostream>
using namespace std;
int main()
{
    int n, lst[201][2], res = 0, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> lst[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        int left = 0, right = 0, lower = 0, upper = 0;
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                if (lst[j][0] > lst[i][0] && lst[j][1] == lst[i][1])
                    left += 1;
                else if (lst[j][0] < lst[i][0] && lst[j][1] == lst[i][1])
                    right += 1;
                else if (lst[j][0] == lst[i][0] && lst[j][1] < lst[i][1])
                    lower += 1;
                else if (lst[j][0] == lst[i][0] && lst[j][1] > lst[i][1])
                    upper += 1;
            }
        }
        if (left >= 1 and right >= 1 and lower >= 1 and upper >= 1)
            res += 1;
    }
    cout << res << endl;
}