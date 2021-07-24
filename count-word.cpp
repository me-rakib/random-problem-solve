#include<iostream>
#define MAX_SIZE 100
using namespace std;
int main()
{
    char line[MAX_SIZE], prv_char = '\0';
    printf("Enter line: ");
    fgets(line, MAX_SIZE, stdin);
    int i=0, word = 0;
    while (1)
    {
        if(line[i] == ' ' || line[i] == '\t' || line[i] == '\n' || line[i] == '\0')
        {
            if(prv_char != ' ' && prv_char != '\t' && prv_char != '\n' && prv_char != '\0') 
            {
                word++;
            }
        }
        prv_char = line[i];
        if(line[i] == '\0')
        {
            break;
        }
        else 
        {
            i++;
        }
    }
    printf("Total word = %d", word);
    return 0;
}