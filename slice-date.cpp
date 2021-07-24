#include<iostream>
using namespace std;
int main()
{
    char date[] = "21/09/13";
    int i=0;
    while(date[i] != '\0')
    {
        if(date[i] == '/')
        {
            printf("\n");
            i++;
        }
        else
        {
            printf("%c", date[i]);
            i++;
        }
    }
    return 0;
}