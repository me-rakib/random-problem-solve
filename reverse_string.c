#include<stdio.h>
int main()
{
    char arr[] = "Hello World";
    int i;
    for(i=strlen(arr)-1; i>=0; i--)
    {
        printf("%c",arr[i]);
    }
    return 0;
}
