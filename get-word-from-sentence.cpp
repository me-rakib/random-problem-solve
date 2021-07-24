#include<iostream>
using namespace std;
int main()
{
    char sent[100];
    fgets(sent, 100, stdin);
    int i=0;
    while(sent[i] != '\0')
    {
        if(sent[i] == ' ')
        {
            printf("\n");
            i++;
            continue;
        }
        else
        {
            printf("%c", sent[i]);
            i++;
        }
    }
    return 0;
}