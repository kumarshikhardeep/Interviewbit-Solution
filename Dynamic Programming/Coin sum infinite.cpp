int Solution::coinchange2(vector<int> &A, int B) {
    int t[A.size()][B+1];
    for(int i=1;i<B+1;i++)
    {
        if(i%A[0]==0)
            t[0][i]=1;
        else
            t[0][i]=0;
    }
    for(int i=0;i<A.size();i++)
    {
        t[i][0]=1;
    }
    for(int i=1;i<A.size();i=(i+1))
    {
        for(int j=1;j<B+1;j=(j+1))
        {
            if(A[i]>j)
            {
                t[i][j]=t[i-1][j]%1000007;
            }
            else
            {
                t[i][j]=(t[i-1][j]%1000007+t[i][j-A[i]]%1000007)%1000007;
            }
            
        }
    }
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<B+1;j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<"\n";
    }
    return t[A.size()-1][B]%1000007;
}
