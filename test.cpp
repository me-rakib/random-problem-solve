#include<iostream>
using namespace std;
int main()
{
    int x1, x2, x3, x4, y1, y2, y3, y4, a;
    scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
    if(x2<x1)
    {
        swap(x1,x2);
        swap(y1,y2);
    }
    if((x1!=x2&&y1!=y2)&&x2!=y2&&abs(x1-x2)!=abs(y1-y2))
    {
        printf("-1");
    }
    else
    {
        if(x1==x2)
        {
            a = abs(y1-y2);
            x3 = x1+a;
            x4 = x1+a;
            y3 = y1;
            y4 = y2;
        }
        else if(y1==y2)
        {
            a = abs(x1-x2);
            y3 = y1+a;
            y4 = y1+a;
            x3 = x1;
            x4 = x2;
        }
        else
        {
            x3 = x1;
            x4 = x2;
            y3 = y2;
            y4 = y1;
        }
    }
    printf("%d %d %d %d",x3,y3,x4,y4);
    return 0;
}
