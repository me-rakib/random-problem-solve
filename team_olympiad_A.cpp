#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, i, j, k, w=0, c, a1=0, a2=0, a3=0;
    scanf("%d", &n);
    int arr[n], arrx[3] = {1,2,3}, arr1[n], arr2[n], arr3[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d", (arr+i-1));
        if(*(arr+i-1) == 1)
        {
            arr1[a1] = i;
            a1++;
        }
        else if(*(arr+i-1) == 2)
        {
            arr2[a2] = i;
            a2++;
        }
        else if(*(arr+i-1) == 3)
        {
            arr3[a3] = i;
            a3++;
        }
    }
    sort(arr, arr+n);
    for(i=0; i<n; i++)
    {
        k=0;
        c=0;
        for(j=0; j<n; j++)
        {
            if(arrx[k]==arr[j])
            {
                arr[j] = 0;
                c++;
                k++;
            }
        }
        if(c==3)
        {
            w++;
        }
    }
    printf("%d \n",w);
    for(i=0; i<w; i++)
    {
        printf("%d ",arr1[i]);
        printf("%d ",arr2[i]);
        printf("%d",arr3[i]);
        printf("\n");
    }
    return 0;
}
