#include <iostream>
using namespace std;
int main()
{
    int n, k, i, r, ans=0;
    long long int temp, rem;
    cin >> n >> k;

    for (i = 0; i < n; i++)
    {
        cin >> temp;
        r = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            if ((rem == 4) || (rem == 7))
            {
                r++;
            }
            temp /= 10;
        }
        if (r > k) 
        {
            ans++;
        }
    }
    cout << n - ans << endl;
    return 0;
}