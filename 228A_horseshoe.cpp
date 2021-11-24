#include<iostream>
using namespace std;
int main()
{
    int i, j, arr[5], s=0;
    for(i=0; i<4; i++)
    {
        cin >> arr[i];
    }
    for(i=0; i<3; i++)
    {
        for(j=i+1; j<4; j++)
        {
            if(arr[i] ==arr[j] && arr[j] != 0)
            {
                arr[j] = 0;
                s++;
            }
        }
    }
    printf("%d", s);
}