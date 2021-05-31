#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int mx = arr[0], mn = arr[0];
    int mx_pos,mn_pos;
    for(int i=0; i<n; i++)
    {
        if(mx<arr[i])
        {
            mx = arr[i];
            mx_pos = i;
        }
        if(mn>arr[i])
        {
            mn = arr[i];
            mn_pos = i;
        }
    }
    n = n-1;
    if(mx_pos>mn_pos)
    {
        mn_pos = mn_pos + 1;
    }
    cout << mx_pos+n-mn_pos << endl;

}
