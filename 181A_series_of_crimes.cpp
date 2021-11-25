#include <iostream>
using namespace std;
int main()
{
    int i, j, n, m, k=0;
    int cor[7];
    char ch;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cin >> ch;
            if (ch == '*')
            {
                cor[k++] = i;
                cor[k++] = j;
            }
        }
    }
    int x1=cor[0], y1=cor[1], x2=cor[2], y2=cor[3], x3=cor[4], y3=cor[5],x,y;
    if(x1 == x2)
    {
        x = x3;
    }
    else if(x1 == x3)
    {
        x = x2;
    }
    else
    {
        x = x1;
    }

    if(y1 == y2)
    {
        y = y3;
    }
    else if(y1 == y3)
    {
        y = y2;
    }
    else
    {
        y = y1;
    }
    cout << x << " " << y;
}