#include<iostream>
#include<string.h>
#define MAX 202
using namespace std;
int main()
{
    char str[MAX];
    fgets(str, MAX, stdin);
    int i=0;
    while(i<strlen(str)-1)
    {
        if((str[i]=='W') && (str[i+1]=='U') && (str[i+2]=='B'))
           {
               if(i!=0)
               {
                   cout << " ";
               }
               i += 3;
               continue;
           }
        else
            {
                cout << str[i];
                i++;
            }
    }
    return 0;

}
