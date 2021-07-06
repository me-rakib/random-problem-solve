#include<stdio.h>
void double_all(int *a, int size)
{
    int i, sum=0;
    for(i=0; i<size; i++)
    {
        *(a+i) = *(a+i)*2;
    }

}
int main()
{
    int i, arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    double_all(arr,size);
    for(i=0; i<size; i++)
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}
