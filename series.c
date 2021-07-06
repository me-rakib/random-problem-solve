#include<iostream>
using namespace std;
int main()
{
    int i=1, mul, sum=0;
    while(i<=10)
    {
        mul = i * (i+1);
        sum += mul;
        i += 2;
    }
    printf("%d", sum);
    return 0;
}
