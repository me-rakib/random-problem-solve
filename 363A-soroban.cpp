#include <iostream>
#include <string.h>
using namespace std;
void print_pattern(char c1, char c2, char num);
int main()
{
    char dgt[20];
    int len, i;
    cin >> dgt;
    len = strlen(dgt) - 1;
    for (i = len; i >= 0; i--)
    {
        if (dgt[i] >= '5' && dgt[i] <= '9')
        {
            cout << "-O|";
            print_pattern('5','9',dgt[i]);
        }
        else
        {
            cout << "O-|";
            print_pattern('0','4',dgt[i]);
        }
        cout << "\n";
    }
    return 0;
}

void print_pattern(char c1, char c2, char num)
{
    int j;
    for (j = 1; j <= num - c1; j++)
    {
        cout << "O";
    }
    cout << "-";
    for (j = 1; j <= c2 - num; j++)
    {
        cout << "O";
    }
}