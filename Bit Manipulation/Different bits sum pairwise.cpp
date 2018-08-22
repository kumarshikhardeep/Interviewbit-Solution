int Solution::cntBits(vector<int> &A) {
    long long int one=1;
    long long int t=0;
    long long int res=0;
    for(int i=0;i<32;i++)
    {
        t=0;
        for(long long int j=0;j<A.size();j++)
        {
            if(one&A[j])
                t++;
        }
        one=one<<1;
        res+=2*t*(A.size()-t);
    }
    return res%1000000007;
}
