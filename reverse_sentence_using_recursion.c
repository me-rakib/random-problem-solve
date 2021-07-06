#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100

void rev(char *sen, int n);
int main()
{
    char sen[MAX_SIZE];
    printf("Enter a sentence: ");
    fgets(sen,sizeof(sen),stdin);
    int len = strlen(sen)-2;
    printf("\n");
    rev(sen, len);
    printf("\n");
    return 0;
}

void rev(char *sen, int n)
{
    /*
    int i;
    for(i=n-1; i>=0; i--)
    {
        printf("%c",*(sen+i));
    }
    */
    if(n==-1)
        return;
    printf("%c",*(sen+n));
    rev(sen, n-1);
}
