#include<iostream>
using namespace std;
long long int print(long long int n);
int main()
{
    long long int a, b, c;
    cin >> a >> b;
    c = a + b;
    if (print(print(a))+print(print(b)) == print(print(c))) {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

long long int print(long long int n) 
{
    long long int rem, rev=0;
    while (n!=0)
    {
        rem = n % 10;
        if(rem != 0) {
            rev = rev * 10 + rem;
        }
        n /= 10;
    }
    return rev;
    
}