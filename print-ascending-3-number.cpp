#include <iostream>
using namespace std;
int main()
{
    int a, b, c, x,y,z;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && b > c)
    {
        x = a;
        y = b;
        z = c;
    }
    else if (b > a && a > c)
    {
        x = b;
        y = a;
        z = c;
    }
    else 
    {
        x = c;
        if(a > b) 
        {
            y = a;
            z = b;
        }
        else 
        {
            z = a;
            y = b;
        }
    }
    printf("%d < %d < %d",z,y,x);
    return 0; 
}