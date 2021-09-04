#include <iostream>
#include <string.h>
#define MAX_SIZE 52
using namespace std;
int main()
{
    char s[MAX_SIZE], t[MAX_SIZE];
    int res = 1, i, j = 0, len;
    cin >> s >> t;
    len = strlen(t);
    for (i = 0; i < len; i++)
    {
        if (t[i] == s[j])
        {
            j++;
            res++;
        }
    }
    if (res > strlen(s))
    {
        res = strlen(s);
    }
    cout << res << endl;
}