#include <iostream>
#include <string.h>
#define MAX_SIZE 105
using namespace std;
int main()
{
    char name[MAX_SIZE];
    cin >> name;
    int i, j, l = 0, len = strlen(name);

    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (name[i] == name[j])
            {
                name[j] = '0';
            }
        }
        if (name[i] != '0')
        {
            l++;
        }
    }

    if (l % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}