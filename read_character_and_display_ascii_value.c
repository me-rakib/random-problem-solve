#include<stdio.h>
#include<string.h>
void display(char *arr, int len);
int main()
{
    char arr[] = "Hello";
    int len = strlen(arr);
    display(arr, len);
    return 0;
}
void display(char *arr, int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        printf("%c = %d\n",*(arr+i), *(arr+i));
    }
}
