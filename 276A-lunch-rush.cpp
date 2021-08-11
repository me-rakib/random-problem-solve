// My solution 

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, k, f, t, *temp, i;
    scanf("%d %d", &n, &k);
    temp = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &f, &t);
        if (t > k)
        {
            temp[i] = f - (t - k);
        }
        else
        {
            temp[i] = f;
        }
    }
    sort(temp, temp + i, greater<int>());
    printf("%d", temp[0]);
    return 0;
}

// solution without using array

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, k, f, t, res, temp;
//     scanf("%d %d %d %d", &n, &k, &f, &t);
//     if(t>k)
//     {
//         res = f - (t-k);
//     }
//     else
//     {
//         res = f;
//     }
//     while(--n)
//     {
//         scanf("%d %d", &f, &t);
//         if (t > k)
//         {
//             temp = f - (t - k);
//         }
//         else
//         {
//             temp= f;
//         }
//         if(temp > res)
//         {
//             res = temp;
//         }
//     }
//     printf("%d", res);
//     return 0;
// }