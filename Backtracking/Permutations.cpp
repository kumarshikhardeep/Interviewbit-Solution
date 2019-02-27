void permutations(vector<vector<int>> &res, vector<int> &A, int beg)
{
    if(beg==A.size()-1)
    {
        res.push_back(A);
        return;
    }
    for(int i=beg;i<A.size();i++)
    {
        int temp=A[i];
        A[i]=A[beg];
        A[beg]=temp;
        permutations(res,A,beg+1);
        temp=A[i];
        A[i]=A[beg];
        A[beg]=temp;
    }
    return;
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int>> res;
    permutations(res,A,0);
    //sort(res.begin(),res.end());
    return res;
    
}
