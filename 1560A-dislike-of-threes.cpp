#include<iostream>
using namespace std;
int main()
{
    int n, x, i=0, c=1, arr[1005]; 
    while(i<1003)
    {
        if(c%3 != 0) 
        {
            if(c%10 != 3) {
                arr[i] = c;
                i++;
            }
        }
        c++;
    }
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> x;
        printf("%d\n", arr[x-1]);
    }
    return 0;
}