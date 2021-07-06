#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int res[5];
    res[0] = a+b*c;
    res[1] = a*(b+c);
    res[2] = a*b*c;
    res[3] = (a+b)*c;
    res[4] = a+b+c;
    sort(res,res+5);
    printf("%d",res[4]);
    return 0;
}