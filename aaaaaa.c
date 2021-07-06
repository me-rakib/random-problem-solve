
#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    char arr1[MAX_SIZE], arr2[MAX_SIZE];

    fgets(arr1, MAX_SIZE, stdin);
    fgets(arr2, MAX_SIZE, stdin);

    int i, count=-2;
    for(i=0; i<MAX_SIZE; i++)
    {
        if(arr1[i]==arr2[i])
        {
            count++;
        }
        else
        {
            break;
        }

    }
    printf("%d",count);
    return 0;

}
