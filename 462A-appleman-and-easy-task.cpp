#include <iostream>
using namespace std;
int main()
{
    int n, i, j, c;
    cin >> n;
    bool even = true;
    char ch[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> ch[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        c = 0;
        for (j = 0; j < n; j++)
        {
            if (i - 1 >= 0 and ch[i - 1][j] == 'o')
            {
                c++;
            }
            if (i + 1 < n and ch[i + 1][j] == 'o')
            {
                c++;
            }
            if (j - 1 >= 0 and ch[i][j - 1] == 'o')
            {
                c++;
            }
            if (j + 1 < n and ch[i][j + 1] == 'o')
            {
                c++;
            }
            if (c % 2 == 1)
            {
                even = false;
                break;
            }
        }
        if (even == false)
        {
            cout << "NO" << endl;
            break;
        }
    }
    if (even)
    {
        cout << "YES" << endl;
    }
    return 0;
}