int Solution::minimumTotal(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

  /*  int sum=A[0][0];
    int minind=0;
    for(int i=1;i<A.size();i++)
    {
        int start=max(0,minind-1);
        int l=A[i].size();
        int end=min(l-1,minind+1);
       if(A[i-1][minind]==A[i-1][minind-1])
       {
           start=max(0,minind-2);
       }
       if(A[i-1][minind]==A[i-1][minind+1])
       {
           end=min(l-1,minind+2);
       }
       int m=INT_MAX;
       for(int j=start;j<=end;j++)
       {
           if(A[i][j]<m)
            {
                m=A[i][j];
                minind=j;
            }
       }
       sum+=m;
    }
    return sum;*/
    int memo[A.size()];
    int n = A.size() - 1;
 
    // For the bottom row
    for (int i = 0; i < A[n].size(); i++) 
        memo[i] = A[n][i];    
 
    // Calculation of the remaining rows,
    // in bottom up manner.
    for (int i = A.size() - 2; i >= 0; i--) 
        for (int j = 0; j < A[i + 1].size() - 1; j++) 
            memo[j] = A[i][j] + min(memo[j],memo[j + 1]);
 
    // return the top element
    return memo[0];
}
