int Solution::singleNumber(const vector<int> &A) {
    int one=1;
    int sum=0;
    int res=0;
    for(int i=0;i<31;i++)
    {
        sum=0;
        for(int j=0;j<A.size();j++)
        {
            if(one&A[j])
                sum++;
        }
        
        if(sum%3)
            res=res|one;
        one=one<<1;
    }
    return res;
}
