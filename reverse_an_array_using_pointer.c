// reverse an array with pointer
#include<stdio.h>
int main()
{
    int n;
    printf("Total array element: ");
    scanf("%d",&n);
    int arr[n];
    int i, temp;
    for(i=0; i<n; i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0; i<(n/2.0); i++)
    {
        temp = *(arr+i);
        *(arr+i) = *(arr+n-1-i);
        *(arr+n-1-i) = temp;
    }
    printf("Reversed array = ");
    for(i=0; i<n; i++)
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}
