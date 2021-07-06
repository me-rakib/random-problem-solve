#include <iostream>
using namespace std;
int main()
{
    int r, c, i, j, c1 = 0, c2 = 0, res;
    cin >> r >> c;
    string s[r];
    for (i = 0; i < r; i++)
    {
        cin >> s[i];
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (s[i][j] == 'S')
            {
                c1++;
                break;
            }
        }
    }
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            if (s[j][i] == 'S')
            {
                c2++;
                break;
            }
        }
    }
    res = (r * c) - (c1 * c2);
    cout << res;
    return 0;
}