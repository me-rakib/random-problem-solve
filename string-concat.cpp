#include<iostream>
#include<string.h>
#define MAX_SIZE 100
using namespace std;
int main()
{
    char s1[MAX_SIZE], s2[MAX_SIZE], final[MAX_SIZE];
    printf("Enter 1st string: ");
    gets(s1);
    printf("Enter 2nd string: ");
    gets(s2);

    int i=0, j=0;

    while(s1[i] != '\0')
    {
        final[j] = s1[i];
        i++;
        j++;
    }   
    i = 0;
    while (s2[i] != '\0')
    {
        final[j] = s2[i];
        i++;
        j++;
    }

    printf("%s", final);
    return 0;
}