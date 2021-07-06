#include<stdio.h>
int main()
{
    char a[] = "This is a Line";
    int i, count=0;
    printf("%d\n",strlen(a));
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]==' ')
        {
            count++;
        }
    }
    printf("Total world = %d",count+1);
    return 0;
}
