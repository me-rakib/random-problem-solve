#include<stdio.h>
int main()
{
    char arr[] = "This is a line 101.";
    int i,c=0,n=0,s=0;
    for(i=0; i<strlen(arr); i++)
    {
        if(((arr[i]>='A') && (arr[i]<='Z')) || ((arr[i]>='a')&&(arr[i]<='z')))
           {
               c++;
           }
        else if((arr[i]>='0') && (arr[i]<='9'))
        {
            n++;
        }
        else
        {
            s++;
        }
    }
    printf("c=%d n=%d s=%d",c,n,s);
}
