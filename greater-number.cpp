#include<iostream>
using namespace std;
int main()
{
    int a, b, c, big;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c) 
    {
        big = a;
    }
    else if(b>a && b>c) 
    {
        big = b;
    }
    else 
    {
        big = c;
    }
    printf("%d is the greatest", big);
    return 0;
}