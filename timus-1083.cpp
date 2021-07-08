#include <stdio.h>
#include <string.h>
int main()
{
    int n, len, rem, temp, res = 1, i = 1;
    char ch[22];
    scanf("%d %s", &n, ch);
    len = strlen(ch);
    rem = n % len;
    if (rem != 0)
    {
        temp = n;
        while (temp >= rem)
        {
            res *= temp;
            temp = n - (i * len);
            i++;
        }
    }
    else if (rem == 0)
    {
        temp = n;
        while (temp >= len)
        {
            res *= temp;
            temp = n - (i * len);
            i++;
        }
    }
    printf("%d", res);
    return 0;
}