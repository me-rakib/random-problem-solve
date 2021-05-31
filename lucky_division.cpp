#include<iostream>
using namespace std;
int main()
{
    /*
    lucky numbers between 1 to 1000 -
    4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 747, 774, 777
    */
    int arr[13] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 747, 774, 777};
    int n;
    bool res = false;
    cin >> n;
    for(int i=0; i<13; i++)
    {
        if(n%arr[i] == 0)
        {
            res = true;
            break;
        }
    }
    if(res)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
