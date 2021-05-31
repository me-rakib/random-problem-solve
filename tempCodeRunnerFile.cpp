#include<iostream>
using namespace std;
int main()
{
    int n, p, q, x, res=1;
    scanf("%d",&n);
    scanf("%d", &p);
    int arr[n];
    for(int i=0; i<p; i++)
    {
        scanf("%d",&x);
        arr[x] = 1;
    }
    scanf("%d",&q);
    for(int i=0; i<q; i++)
    {
        scanf("%d",&x);
        arr[x] = 1;
    }
    for(int i=1; i<=n; i++)
    {
        if(arr[i] != 1)
        {
            res = 0;
            break;
        }
    }
    if(res==1)
    {
        printf("I become the guy.");
    }
    else
    {
        printf("Oh, my keyboard!");
    }
    return 0;
}