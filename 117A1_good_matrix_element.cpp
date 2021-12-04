#include <iostream>

using namespace std;
int main()
{
    int n, i, j, num, total = 0;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> num;
            if (n == 5)
            {
                if ((i == 0 || j == 0 || i == n - 1 || j == n - 1) && ((i + j) % 2 != 0))
                {
                }
                else
                {
                    total += num;
                }
            }
            else
            {
                total += num;
            }
        }
    }
    cout << total << endl;
}