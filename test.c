#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int input, sos, digit;
    scanf("%d", &input);
    //while (input >= 10)
    for (; input >= 10;)
    {
        sos = 0;
        while (input != 0)
        {
            digit = input % 10;
            input /= 10;
            sos = sos + (digit * digit);
        }
        input = sos;
    }
    if (input == 1)
        printf("%d\n", 1);
    else
    {
        printf("%d\n", 0);
    }

    return 0;
}