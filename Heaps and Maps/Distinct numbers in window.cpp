vector<int> Solution::dNums(vector<int> &A, int B) {
    map<int,int> m;
    vector<int> res;
    for(int i=0;i<B;i++)
    {
        m[A[i]]=m[A[i]]+1;
    }
    res.push_back(m.size());
    int t=0;
    for(int i=B;i<A.size();i++,t++)
    {
        m[A[t]]=m[A[t]]-1;
        if(m[A[t]]==0)
            m.erase(A[t]);
        m[A[i]]=m[A[i]]+1;
        res.push_back(m.size());
    }
    return res;
}
