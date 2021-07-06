#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
int main()
{
    char str[][MAX_SIZE] = {"GeeksforGeeks","Quiz","Practice","Gblogs","Coding"};
    int i, j, len;
    char temp[MAX_SIZE];
    len = sizeof(str)/sizeof(str[0]);
    for(i=0; i<len; i++)
    {
        for(j=0; j<len-1; j++)
        {
            if(strcmp(str[j],str[j+1])>0)
            {
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }
    for(i=0; i<len; i++)
    {
        printf("%s\n",str[i]);
    }
}
