#include<iostream>
#include<algorithm>
#include<string.h>
#define MAX_SIZE 102
using namespace std;



void change(char *p, int n)
{
    char str[MAX_SIZE];
    int i=0, j=0, k=0;
    while(i<n)
    {
        if(*p != '+')
        {
            str[j] = *p;
            j++;
        }
        p++;
        i++;
    }
    sort(str, str+j);
    for(i=0; i<j; i++)
    {
        cout << str[i];
        if(i+1!= j)
        {
            cout << "+";
        }
    }
}
int main()
{
    char str[MAX_SIZE];
    cin >> str;
    change(str,strlen(str));
    return 0;
}
