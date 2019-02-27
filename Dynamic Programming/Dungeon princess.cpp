int Solution::calculateMinimumHP(vector<vector<int> > &A) {
    vector<vector<int>> v(A.size(),vector<int>(A[0].size(),0));
    int r=A.size();
    int c=A[0].size();
    v[r-1][c-1]=A[r-1][c-1];
    for(int i=r-2;i>=0;i--)
    {
        v[i][c-1]=min(0,min(A[i][c-1],A[i][c-1]+v[i+1][c-1]));
    }
    for(int i=c-2;i>=0;i--)
    {
        v[r-1][i]=min(0,min(A[r-1][i],A[r-1][i]+v[r-1][i+1]));
    }
    for(int i=r-2;i>=0;i--)
    {
        for(int j=c-2;j>=0;j--)
        {
            int m=max(v[i+1][j],v[i][j+1]);
            v[i][j]=min(0,min(A[i][j],A[i][j]+m));
        }
    }
    return abs(v[0][0])+1;
}
