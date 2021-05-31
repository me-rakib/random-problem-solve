#include<iostream>
#include<algorithm>
#include<string.h>
#define MAX_SIZE 1000
using namespace std;
int main() 
{
    char arr[MAX_SIZE];
    gets(arr);
    int len = strlen(arr);
    sort(arr,arr+len);
    int count = 0;
    for(int i=0; i<len-1; i++) 
    {
        if((arr[i]>=97) && (arr[i]<=122))
        {
            count++;
            if(arr[i] == arr[i+1])
            {
                count--;
            }
        }
    }
    printf("%d",count);
    return 0;
}