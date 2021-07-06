#include<stdio.h>
int main() 
{
    int n, i, j,index;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for(i=0; i<n; i++) 
    {
        scanf("%d",(arr+i));
    }
    printf("Enter the index you wanna delete: ");
    scanf("%d", &index);
    for(i=index; i<n-1; i++) 
    {
        arr[i] = *(arr+i+1);
    }
    printf("Updated array: ");
    for(i=0; i<n-1; i++) 
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}