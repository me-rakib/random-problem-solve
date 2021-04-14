#include<stdio.h>
#include<string.h>
void change_case(char *p, int n)
{
    int i=0;
    while(i<n)
    {
        if((*p>='a') && (*p<='z'))
        {
            *p = (int)*p - 32;
        }
        p++;
        i++;
    }
}
#define MAX_SIZE 102
int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    int n1, n2;
    n1 = strlen(str1) - 1;
    n2 = strlen(str2) - 1;
    change_case(str1, n1);
    change_case(str2, n2);
    int i, res = 0;
    for(i=0; i<n1; i++)
    {
        if(str1[i]>str2[i]) {
            res = 1;
            break;
        }
        else if(str1[i]<str2[i])
        {
            res = -1;
            break;
        }
        else
        {
            res = 0;
        }
    }
    printf("%d",res);
    return 0;
}
