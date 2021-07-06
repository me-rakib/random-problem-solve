
#include<stdio.h>
int main()
{
    int a[5] = {5,1,15,20,25};
    int i, j, m;
    i = ++a[1];
    j = a[1]++;
    m = a[i++];
    printf("%d %d %d",i,j,m);
}

/*
i = ++a[1] here a[1]=1 so, i = ++1, it's pre increment. So i=2 and a[1] = 2. [ If i=++j, let j = 1, then i=2 also j=2]

j = a[1]++ from previous line a[1] = 2, so j=2++, so j=2, a[1]=3

m = a[i++] i=2++, so for this line i will return 2 and after the operation is over i will be 3. a[2] = 15


*/
