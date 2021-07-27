#include<iostream>
#include<string.h>
#define MAX_SIZE 100
using namespace std;
int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int i, j=0, len1, len2;
    printf("Enter string 1: ");
    fgets(str1, MAX_SIZE, stdin);
    printf("Enter string 2: ");
    fgets(str2, MAX_SIZE, stdin);
    len1 = strlen(str1) - 1;
    len2 = strlen(str2) - 1;
    for(i=0; i<len1; i++)
    {
        if(str1[i] == str2[j])
        {
            j++;
        }
    }
    if(len2 == j)
    {
        printf("%s is found in %s", str2, str1);
    }
    else
    {
        printf("Not Found");
    }
    return 0;
}
