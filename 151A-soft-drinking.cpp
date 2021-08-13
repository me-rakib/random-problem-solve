#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np, temp1, temp2, temp3;
    scanf("%d %d %d %d %d %d %d %d",&n, &k, &l, &c, &d, &p, &nl, &np);
    temp1 = (k*l) / nl;
    temp2 = (c * d) / 1;
    temp3 = p / np;
    printf("%d", (min({temp1, temp2, temp3})/n));
    return 0;
}