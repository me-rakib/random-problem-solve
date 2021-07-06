#include<iostream>
using namespace std;
int main()
{
    string src, match = "hello";
    int i, j = 0, cnt = 0;
    cin >> src;
    for(i=0; i<src.size(); i++)
    {
        if(src[i] == match[j])
        {
            j++;
            cnt++;
        }
        if(cnt == 5)
        {
            break;
        }
    }
    if(cnt==5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
