#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s;
    long long int i, ind, len, ln = 0, rn = 0;
    cin >> s;
    len = s.size();
    ind = s.find('^');
    for (i = 0; i < ind; i++)
    {
        if (s[i] != '=')
        {
            ln += (ind-i) * (s[i] - 48);
        }
    }
    for (i = ind+1; i < len; i++)
    {
        if (s[i] != '=')
        {
            rn += (i-ind) * (s[i] - 48);
        }
    }
    if (ln == rn)
    {
        cout << "balance";
    }
    else if (ln > rn)
    {
        cout << "left";
    }
    else
    {
        cout << "right";
    }
    return 0;
}