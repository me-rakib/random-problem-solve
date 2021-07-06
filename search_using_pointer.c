#include<stdio.h>
#include<stdbool.h>

#define MAX_SIZE 100

void inter_element(int *arr, int size);
bool search(int *arr, int size, int value);
int main()
{
    int arr[MAX_SIZE];
    int size;
    bool t_f;
    printf("Enter total array element: ");
    scanf("%d",&size);
    inter_element(arr, size);
    int value;
    printf("Enter the value you want to search: ");
    scanf("%d",&value);
    t_f = search(arr, size, value);
    if(t_f)
    {
        printf("Value Found");
    }
    else
    {
        printf("Value not found");
    }
    return 0;
}

void inter_element(int *arr, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        scanf("%d",arr+i);
    }
}

bool search(int *arr, int size, int value)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(value==*(arr+i))
        {
            return true;
        }
    }
    return false;
}
