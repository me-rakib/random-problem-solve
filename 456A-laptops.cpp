    #include <iostream>
    using namespace std;
    int main()
    {
        int n, a, b, i = 0;
        bool res = false;
        scanf("%d", &n);
        while (i < n)
        {
            scanf("%d %d", &a, &b);
            if (b>a)
            {
                res = true;
            }
            i++;
        }
        if (res)
        {
            cout << "Happy Alex" << endl;
        }
        else
        {
            cout << "Poor Alex" << endl;
        }
        return 0;
    }