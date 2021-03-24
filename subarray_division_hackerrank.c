#include<stdio.h>
int main()
{
    int i, n, d, m;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",(arr+i));
    }
    scanf("%d  %d",&d,&m);
    int sum = 0, arr_pos = 0, count=0;
    while(1)
    {
        for(i=0; i<m; i++)
        {
            sum+=arr[arr_pos];
            arr_pos++;
        }
        if(sum==d)
        {
            count++;
        }
        if(arr_pos>n)
        {
            break;
        }
        sum = 0;
        arr_pos = arr_pos - m + 1;
    }
    printf("%d",count);
    return 0;
}
