#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE], i, j, n, temp;
    for(i=0; i<10; i++)
    {
        scanf("%d", (arr+i));
    }

    for(i=0; i<10; i++)
    {
        for(j=i; j<10; j++)
        {
            if(arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Which largest number your want to get: ");
    scanf("%d", &n);
    printf("%d",arr[n-1]);
    return 0;
}
