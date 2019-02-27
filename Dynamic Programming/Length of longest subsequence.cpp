int Solution::longestSubsequenceLength(const vector<int> &A) {
    if(A.size()==0)
        return 0;
    int inc[A.size()];
    int dec[A.size()];
    for(int i=0;i<A.size();i++)
    {
        inc[i]=1;
        dec[i]=1;
    }
    for(int i=0;i<A.size();i++)
    {
        
        for(int j=0;j<i;j++)
        {
            if(A[i]>A[j] )
            {
                inc[i]=max(inc[i],inc[j]+1);
            }
          
        }
    }
    for(int i=A.size()-1;i>=0;i--)
    {
        for(int j=A.size()-1;j>i;j--)
        {
            if(A[i]>A[j])
            {
                dec[i]=max(dec[i],dec[j]+1);
            }
 
        }
    }
    int max=INT_MIN;
    for(int i=0;i<A.size();i++)
    {
       // cout<<dec[i]<<"  ";
        if(inc[i]+dec[i] > max)
            max=inc[i]+dec[i];
    }
    return max-1;
}
