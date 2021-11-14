#include <iostream>
#include <stack>
#include <string>
#include <string.h>
#define MAX_SIZE 50
using namespace std;
int main()
{
    int i, n;
    cin >> n;
    getchar();
    for (i = 0; i < n; i++)
    {
        string current = "http://www.lightoj.com/", str, url;
        stack<string> b, f;
        cout << "Case " << i + 1 << ":" << endl;
        while (true)
        {
            cin >> str;
            if (str == "VISIT")
            {
                b.push(current);
                cin >> url;
                current = url;
                cout << current << endl;
                while (!f.empty())
                {
                    f.pop();
                }
            }
            else if (str == "BACK")
            {
                if (b.empty())
                {
                    cout << "Ignored" << endl;
                }
                else
                {
                    f.push(current);
                    current = b.top();
                    b.pop();
                    cout << current << endl;
                }
            }
            else if (str == "FORWARD")
            {
                if (f.empty())
                {
                    cout << "Ignored" << endl;
                }
                else
                {
                    b.push(current);
                    current = f.top();
                    f.pop();
                    cout << current << endl;
                }
            }
            else if (str == "QUIT")
            {
                break;
            }
        }
    }
}