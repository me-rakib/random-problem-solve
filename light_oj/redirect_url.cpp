#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main()
{
    string str, temp, temp1;
    int i, n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> str;
        if (str[4] != 's')
        {
            str = str.substr(4, sizeof(str));
            temp = "https";
            temp.append(str);
            str = temp;
        }
        cout << "Case " << i + 1 << ": " << str << endl;
    }
    return 0;
}