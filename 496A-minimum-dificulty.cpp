#include <iostream>
using namespace std;
int main()
{
    int n, i, *arr, *arr1, s(0), m(1000);
    cin >> n;
    arr = (int *)calloc(n, sizeof(int));
    arr1 = (int *)calloc(n, sizeof(int));
    cin >> arr[0];

    for (i = 1; i < n; i++)
    {
        cin >> arr[i];
        arr1[i] = arr[i] - arr[i - 1];
        s = max(s, arr1[i]);
    }
    for (i = 2; i < n; i++)
    {
        m = max(min(m, arr1[i] + arr1[i - 1]), s);
    }
    cout << m << endl;
}