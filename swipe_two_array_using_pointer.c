// c program to swipe two array using pointer
#include<stdio.h>
void take_input(int *arr);
void swipe(int *arr1, int *arr2);
void print_array(int *arr);
int main()
{
    int arr1[5], arr2[5];
    take_input(arr1);
    take_input(arr2);
    printf("Arr1 before swiping = ");
    print_array(arr1);
    printf("Arr2 before swiping = ");
    print_array(arr2);
    swipe(arr1, arr2);
    printf("Arr1 after swiping = ");
    print_array(arr1);
    printf("Arr2 after swiping = ");
    print_array(arr2);
    return 0;

}

void take_input(int *arr)
{
    int i;
    for(i=0; i<5; i++)
    {
        scanf("%d", arr+i);
    }
}
void swipe(int *arr1, int *arr2)
{
    int temp, i;
    for(i=0; i<5; i++)
    {
        temp = *(arr1+i);
        *(arr1+i) = *(arr2+i);
        *(arr2+i) = temp;
    }
}
void print_array(int *arr)
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
}
