#include<iostream>
using namespace std;
int main()
{
    int n, i, temp;
    scanf("%d", &n);
    for(i=0; i<n; i++) 
    {
        scanf("%d", &temp);
        if(temp>10) 
        {
            printf("%d %d\n",temp-10, 10);
        }
        else 
        {
            printf("%d %d\n", 0, temp);
        }
    }
    return 0;
}