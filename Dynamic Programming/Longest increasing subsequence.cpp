int Solution::lis(const vector<int> &A) {
    int lis[A.size()];
    for(int i=0;i<A.size();i++)
    {
        lis[i]=1;
    }
    for(int i=1;i<A.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(A[i]>A[j])
            {
                lis[i]=max(lis[i],lis[j]+1);
            }
        }
    }
    int max=lis[i];
    for(int i=1;i<A.size();i++)
    {
        if(lis[i]>max)
            max=lis[i];
    }
    return max;
}
