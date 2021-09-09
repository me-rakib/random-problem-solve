#include <iostream>
using namespace std;
int main()
{
    char ch, str[105];
    fgets(str, 102, stdin);
    int i=0;
    bool vowel = false;
    while (str[i] != '\n')
    {
        if ((str[i] >= 'a' and str[i] <='z') or (str[i] >= 'A' and str[i] <='Z'))
        {
            ch = str[i];
            if((str[i] >= 'A' and str[i] <='Z')) 
            {
                ch = str[i] + 32;
            }
            if(ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') 
            {
                vowel = true;
            }
            else
            {
                vowel = false;
            }
        }
        i++;
    }
    
    if(vowel)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
    return 0;
}