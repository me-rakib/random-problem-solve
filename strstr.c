#include<stdio.h>>
#include<string.h>
#define MAX_SIZE 100
int main()
{
    char s1[MAX_SIZE] = "This is NITK", s2[MAX_SIZE] = "NITK";
    /*
    if(strstr(s1,s2)!= NULL)
    {
        printf("String Found");
    }
    else
    {
        printf("Not found");
    }
    */
    printf("The substring is %s",strstr(s1,s2));
    return 0;
}
