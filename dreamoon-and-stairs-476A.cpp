#include<iostream>
using namespace std;
int main()
{
    int n, m, i;
    scanf("%d %d",&n, &m);
    for(i=(n+1)/2; i<=n; i++)
    {
        if(i%m == 0)
        {
            printf("%d",i);
            return 0;
        }
    }
    printf("%d", -1);
    return 0;
}
