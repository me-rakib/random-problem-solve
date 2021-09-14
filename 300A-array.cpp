#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, temp, i, j;
    vector<int> pos, neg, zero;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 0)
        {
            zero.push_back(temp);
        }
        else if (temp > 0)
        {
            pos.push_back(temp);
        }
        else
        {
            neg.push_back(temp);
        }
    }
    if (pos.size() == 0)
    {
        pos.push_back(neg[neg.size() - 1]);
        neg.pop_back();
        pos.push_back(neg[neg.size() - 1]);
        neg.pop_back();
    }
    printf("%d %d\n", 1, neg[0]);
    printf("%d ", pos.size());
    for (i = 0; i < pos.size(); i++)
    {
        printf("%d ", pos[i]);
    }
    printf("\n%d ", zero.size() + neg.size() - 1);
    for (i = 0; i < zero.size(); i++)
    {
        printf("%d ", zero[i]);
    }
    for (i = 1; i < neg.size(); i++)
    {
        printf("%d ", neg[i]);
    }
    return 0;
}