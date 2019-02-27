int Solution::majorityElement(const vector<int> &A) {
    int m, i=0;
    for(int j=0;j<A.size();j++)
    {
        if(i==0)
        {
            m=A[j],i=1;
        }
        else
        {
            if(m==A[j])
                i++;
            else
                i--;
        }
    }
    return m;
}
