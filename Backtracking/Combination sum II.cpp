void gensubsets(vector<vector<int>> &res, vector<int> &cur, vector<int> A, int B, int ind)
{
    if(B==0)
    {
        res.push_back(cur);
        return;
    }
    if(ind==A.size() || B<0)
    {
        return;
    }
    cur.push_back(A[ind]);
    gensubsets(res,cur,A,B-A[ind],ind+1);
    cur.pop_back();
    gensubsets(res,cur,A,B,ind+1);
   /* if(ind==A.size())
    {
        int sum=0;
        for(int i=0;i<cur.size();i++)
        {
            sum+=cur[i];
        }
        if(sum==B)
            res.push_back(cur);
        return;
    }
    gensubsets(res,cur,A,B,ind+1);
    cur.push_back(A[ind]);
    gensubsets(res,cur,A,B,ind+1);
    cur.pop_back();*/
    return;
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<int>> res;
    vector<int> cur;
    sort(A.begin(),A.end());
    gensubsets(res,cur,A,B,0);
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
