#include<iostream>
using namespace std;

long long int nth_palindrome(long long int n);
int main()
{
    long long int n, res;
    printf("Enter N: ");
    scanf("%lld", &n);
    res = nth_palindrome(n);
    printf("%lldth palindrome is %lld",n,res);
    return 0;
}

long long int nth_palindrome(long long int n) 
{
    long long int rem, res, rev=0, c=0, temp1=1, temp2;

    while(c != n)
    {
        rev = 0;
        temp2 = temp1;
        while(temp2 != 0)
        {
            rem = temp2 % 10;
            rev = rev * 10 + rem;
            temp2 /= 10;
        }
        if(temp1 == rev) 
        {
            c++;
            res = temp1;
        }
        temp1++;
    }
    return res;
}