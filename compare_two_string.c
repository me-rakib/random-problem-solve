#include<stdio.h>
#define MAX_VALUE 100
int main()
{
    char str1[MAX_VALUE], str2[MAX_VALUE];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    int i, same=0;
    for(i=0; (str1[i]!='\0')||(str2[i]!='\0'); i++)
    {
        if(str1[i]==str2[i])
        {
            same=1;
        }
    }
    if(same==1)
    {
        printf("Both string is same");
    }
    else
    {
        printf("Different");
    }
    return 0;
}
