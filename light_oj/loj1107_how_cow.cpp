#include <iostream>
using namespace std;
int main()
{
    int t, m, i, j, x, y, x1, y1, x2, y2;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        cin >> m;
        cout << "Case " << i + 1 << ":" << endl;
        for (j = 0; j < m; j++)
        {
            cin >> x >> y;
            if ((x1 < x && x < x2) && (y1 < y && y < y2))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}