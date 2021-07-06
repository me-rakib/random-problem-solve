
int myAlgorithm4(int n,int *val,int key)
{
    int low=1,high=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(key<val[mid]) low=mid-1;
        if(key>val[mid]) high=mid+1;
        if(key==val[mid]) return 1;
    }
    return 0;
}
