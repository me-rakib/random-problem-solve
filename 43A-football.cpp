#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    vector<string> str, a, b;
    string s;
    for (i = 0; i < n; i++)
    {
        cin >> s;
        str.push_back(s);
    }
    for (i = 0; i < n; i++)
    {
        if (str[0] == str[i])
        {
            a.push_back(str[i]);
        }
        else
        {
            b.push_back(str[i]);
        }
    }
    cout << (a.size() > b.size() ? a[0] : b[0]);
}