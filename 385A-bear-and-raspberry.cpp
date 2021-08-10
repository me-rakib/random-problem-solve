#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, c, *arr, *temp, i, j=0;
    scanf("%d %d", &n, &c);
    arr = (int *)calloc(n, sizeof(int));
    temp = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
    for(i=0; i<n-1; i++)
    {
        if(arr[i] > arr[i+1]) 
        {
            temp[j] = arr[i]-arr[i+1]-c;
            j++;
        }
    }
    sort(temp, temp+j, greater<int>());
    if(temp[0] and (temp[0] > 0)) 
    {
        printf("%d",temp[0]);
    }
    else
    {
        printf("%d", 0);
    }
    return 0;
}