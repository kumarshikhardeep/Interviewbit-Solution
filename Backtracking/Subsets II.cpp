void gensubsets(vector<vector<int>> &res, vector<int> &cur, vector<int> A, int ind)
{
    if(ind==A.size())
    {
        res.push_back(cur);
        return;
    }
    gensubsets(res,cur,A, ind+1);
    cur.push_back(A[ind]);
    gensubsets(res,cur,A, ind+1);
    cur.pop_back();
    return;
}

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    vector<vector<int>> res;
    vector<int> cur;
    sort(A.begin(),A.end());
    gensubsets(res, cur, A, 0);
    sort(res.begin(),res.end());
    vector<vector<int>> res2;
    if(res.size()==0)
        return res;
    res2.push_back(res[0]);
    for(int i=1;i<res.size();i++)
    {
        if(res[i]!=res2[res2.size()-1])
            res2.push_back(res[i]);
    }
    return res2;
}
