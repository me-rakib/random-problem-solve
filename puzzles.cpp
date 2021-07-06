#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n, m;
    scanf("%d %d",&n, &m);
    if(((n>=2) && (n<=50)) && ((m>=2) && (m<=50)))
    {
        int arr[m];
        for(int i=0; i<m; i++)
        {
            scanf("%d", (arr+i));
        }
        sort(arr,arr+m);
        int res = arr[n-1] - arr[0];
        for(int i=0; i<=m-n; i++)
        {
            if(arr[i+n-1]-arr[i]<res)
            {
                res = arr[i+n-1] - arr[i];
            }
        }
        printf("%d", res);
    }
    return 0;
}
