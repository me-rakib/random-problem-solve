#include<iostream>
#define MAX_SIZE 101
using namespace std;
int main() 
{
    int n, m, i, j, mn, mx;
    int correct[MAX_SIZE], wrong[MAX_SIZE];
    cin>> n >> m;
    for(i=0; i<n; i++)
    {
        cin >> *(correct+i);
    }
    for(i=0; i<m; i++)
    {
        cin >> *(wrong+i);
    }
    mx = correct[0];
    mn = correct[0];
    for(i=0; i<n; i++) 
    {
        if(*(correct+i) > mx) {
            mx = *(correct+i);
        }
        if(*(correct+i) < mn) {
            mn = *(correct+i);
        }
    }
    mx = max(mx,2 * mn);
    mn=wrong[0];
    for(i=0; i<m;i++) 
    {
        if(mn>*(wrong+i)) {
            mn = *(wrong+i);
        }
    }
    if(mx<mn) {
        cout << mx;
    }
    else {
        cout << -1;
    }
    return 0;
}