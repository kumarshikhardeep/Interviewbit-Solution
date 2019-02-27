int Solution::minPathSum(vector<vector<int> > &A) {
   int t[A.size()][A[0].size()];
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            t[i][j]=0;
        }
    }
    t[0][0]=A[0][0];
    for(int i=1;i<A.size();i++)
    {
        t[i][0]=t[i-1][0] + A[i][0];
    }
    for(int i=1;i<A[0].size();i++)
    {
        t[0][i]=t[0][i-1] + A[0][i];
    }
    for(int i=1;i<A.size();i++)
    {
        for(int j=1;j<A[0].size();j++)
        {
            t[i][j]=min(t[i-1][j],t[i][j-1]) + A[i][j];
        }
    }
    return t[A.size()-1][A[0].size()-1];
}
