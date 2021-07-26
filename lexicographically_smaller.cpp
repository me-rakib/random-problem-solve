#include <iostream>
#include <string.h>
#define MAX_SIZE 100
using namespace std;
int main()
{
    char ch1[MAX_SIZE], ch2[MAX_SIZE];
    int i, len, len1, len2, res = 0;
    printf("Enter string 1: ");
    fgets(ch1, MAX_SIZE, stdin);
    printf("Enter string 2: ");
    fgets(ch2, MAX_SIZE, stdin);
    len1 = strlen(ch1) - 1;
    len2 = strlen(ch2) - 1;
    len = len1 > len2 ? len2 : len1;
    for (i = 0; i < len; i++)
    {
        if (ch1[i] == ch2[i])
        {
            continue;
        }
        else
        {
            if (ch1[i] > ch2[i])
            {
                res = 1;
            }
            else
            {
                res = 2;
            }
            break;
        }
    }
    if (res == 0)
    {
        printf("They both are same");
    }
    else if (res == 1)
    {
        printf("%s is lexicographically smaller", ch2);
    }
    else if (res == 2)
    {
        printf("%s is lexicographically smaller", ch1);
    }
    return 0;
}