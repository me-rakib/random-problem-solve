#include<stdio.h>
void displayArr(int arr[2][2]);
int main()
{
    int arr[2][2] = {{1,2}, {3,4}};
    displayArr(arr);
    return 0;
}
void displayArr(int arr[2][2])
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
