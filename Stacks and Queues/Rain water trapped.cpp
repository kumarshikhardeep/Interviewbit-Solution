int Solution::trap(const vector<int> &A) {
    int left[A.size()];
    int right[A.size()];
    left[0]=A[0];
    right[A.size()-1]=A[A.size()-1];
    for(int i=1;i<A.size();i++)
    {
        if(A[i]>left[i-1])
        {
            left[i]=A[i];
        }
        else
        {
            left[i]=left[i-1];
        }
    }
    for(int i=A.size()-2;i>=0;i--)
    {
        if(A[i]>right[i+1])
        {
            right[i]=A[i];
        }
        else
        {
            right[i]=right[i+1];
        }
    }
    int tot=0;
    for(int i=0;i<A.size();i++)
    {
        tot+=min(left[i],right[i])-A[i];
    }
    return tot;
}
