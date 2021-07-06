#include<stdio.h>
#include<string.h>
int main()
{
    char name[5][10], key[10];
    int i, temp=0;
    printf("Enter 5 strings: \n");
    for(i=0; i<5; i++)
    {
        scanf("%s",name[i]);
    }
    printf("Enter the string to be searched: ");
    scanf("%s",key);
    for(i=0; i<5; i++)
    {
        if(strcmp(name[i],key)==0)
        {
            temp = i;
        }
    }
    if(temp=0)
    {
        printf("Not found");
    }
    else
    {
        printf("Found in %d",temp+1);
    }
    return 0;
}
