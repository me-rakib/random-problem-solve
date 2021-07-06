#include <iostream>
using namespace std;
int main()
{
    int n, p, v, pv, trade, c = 0, i, j;
    cin >> n >> v;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        trade = 0;
        cin >> p;
        for (j = 0; j < p; j++)
        {
            cin >> pv;
            if (pv < v && trade == 0)
            {
                arr[c] = i + 1;
                c++;
                trade = 1;
            }
        }
    }
    cout << c << endl;
    for (i = 0; i < c; i++)
    {
       cout << arr[i] << " ";
    }
    return 0;
}