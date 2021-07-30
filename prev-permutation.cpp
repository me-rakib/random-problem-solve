/*
Previous permutation of 3 2 1 will be 3 1 2 means it will return lexicographically less value then the first one. If there is nothing like that then it will return false and will sort in descending order
*/

#include <iostream>
#include <algorithm> // here pre_permutation function is stored
#include <string.h>

using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4};
    int len = sizeof(arr) / sizeof(int);
    sort(arr, arr + len);
    reverse(arr, arr + len);
    do
    {
        printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
    } while (prev_permutation(arr, arr + len));
    printf("After loop: %d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
    return 0;
}