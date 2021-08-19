#include <iostream>
using namespace std;
int main()
{
    long long int a, b, i;
    cin >> a >> b;

    if (a % 2 != 0)
    {
        a++;
    }
    if ((b - a)  < 2)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << a << " " << a + 1 << " " << a + 2 << endl;
    }
    return 0;
}