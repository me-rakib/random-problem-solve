#include <iostream>
using namespace std;
int res(int p, int t);
int main()
{
    int a, b, c, d, r1, r2;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    r1 = res(a, c);
    r2 = res(b, d);
    if (r1 == r2)
    {
        printf("Tie");
    }
    else if (r1 > r2)
    {
        printf("Misha");
    }
    else
    {
        printf("Vasya");
    }
    return 0;
}

int res(int p, int t)
{
    return max((3 * p) / 10, p - (p / 250) * t);
}