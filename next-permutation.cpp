/*
Next permutation of 1 2 3 will be 1 3 2, means it will return next lexicographically greater value. or if that not possible then return false, and end up whith ascending order 
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + len);
    do
    {
        printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
    } while (next_permutation(arr, arr + len));
    printf("After loop: %d %d %d %d",arr[0],arr[1],arr[2],arr[3]);
    return 0;
}