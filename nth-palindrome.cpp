// find out the nth palindrome number

#include <iostream>
using namespace std;
int main()
{
    int n, c = 0, num = 1, nth_palindrome;
    scanf("%d", &n);
    while (c != n)
    {
        int num1 = num;
        int reversed = 0;
        while (num1 != 0)
        {
            int rem = num1 % 10;
            reversed = reversed * 10 + rem;
            num1 /= 10;
        }
        if (num == reversed)
        {
            c++;
            nth_palindrome = num;
        }
        num++;
    }
    printf("%dth palindrome is %d\n", n, nth_palindrome);
    return 0;
}