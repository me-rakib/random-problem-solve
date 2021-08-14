#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, m, temp, i, chest = 0, biceps = 0, back = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &temp);
        if (i % 3 == 1)
        {
            chest += temp;
        }
        else if (i % 3 == 2)
        {
            biceps += temp;
        }
        else if (i % 3 == 0)
        {
            back += temp;
        }
    }
    m = max({chest, biceps, back});
    if (m == chest)
    {
        cout << "chest" << endl;
    }
    else if (m == biceps)
    {
        cout << "biceps" << endl;
    }
    else if (m == back)
    {
        cout << "back" << endl;
    }
    return 0;
}