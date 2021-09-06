#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, i, j, *ppl, *time, p, temp;
    cin >> n;
    ppl = (int *) calloc(n, sizeof(int));
    time = (int *) calloc(n, sizeof(int));
    for(i=0; i<n; i++)
    {
        cin >> ppl[i];
    }
    for(i=0; i<n; i++) 
    {
        temp = 15 * ppl[i];
        for(j=0; j<ppl[i]; j++) 
        {
            cin >> p;
            temp += (p*5);
        }
        time[i] = temp;
    }
    sort(time, time+n);
    cout << time[0] << endl;
    return 0;
}