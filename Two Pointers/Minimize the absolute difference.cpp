int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int i=0,j=0,k=0,s=INT_MAX;
    while(i<A.size() && j<B.size() && k<C.size())
    {
        int minimum=min(A[i],min(B[j],C[k]));
        int maximum=max(A[i],max(B[j],C[k]));
        if(abs(maximum-minimum) < s)
            s=abs(maximum-minimum)
    }
}
